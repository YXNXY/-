#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> ss(m+1,vector<int>(n+1));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ss[i+1][j+1]=ss[i+1][j]+ss[i][j+1]-ss[i][j]+grid[i][j];
                ans+=ss[i+1][j+1]<=k;
            }
        }
        return ans;
    }
};