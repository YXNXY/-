#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        vector ss(m+1,vector<array<int,2>>(n+1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ss[i+1][j+1][0]=ss[i+1][j][0]+ss[i][j+1][0]-ss[i][j][0];
                ss[i+1][j+1][1]=ss[i+1][j][1]+ss[i][j+1][1]-ss[i][j][1];
                if(grid[i][j]!='.'){
                    ss[i+1][j+1][grid[i][j]&1]++;
                }
                if(ss[i+1][j+1][0]&&ss[i+1][j+1][0]==ss[i+1][j+1][1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};