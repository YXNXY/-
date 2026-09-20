#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int n=grid[0].size();
        vector<int>col_sum(n,-1);
        for(auto& row:grid){
            for(int j=0;j<n;j++){
                col_sum[j]+=row[j];
            }
        }
        long long ans=0;
        for(auto& row:grid){
            int row_sum=reduce(row.begin(),row.end())-1;
            for(int j=0;j<row.size();j++){
                if(row[j]==1){
                    ans+=row_sum*col_sum[j];
                }
            }
        }
       return ans;
    }
};