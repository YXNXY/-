#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> ss(m+1,vector<int>(n+1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ss[i+1][j+1]=ss[i+1][j]+ss[i][j+1]-ss[i][j]+grid[i][j];
            }
        }
        vector<vector<int>> dd(m+2,vector<int>(n+2));
        for(int i2=stampHeight;i2<=m;i2++){
            for(int j2=stampWidth;j2<=n;j2++){
                int i1=i2-stampHeight+1;
                int j1=j2-stampWidth+1;
                if(ss[i2][j2]-ss[i2][j1-1]-ss[i1-1][j2]+ss[i1-1][j1-1]==0){
                    dd[i1][j1]++;
                    dd[i1][j2+1]--;
                    dd[i2+1][j1]--;
                    dd[i2+1][j2+1]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dd[i+1][j+1]+=dd[i+1][j]+dd[i][j+1]-dd[i][j];
                if(grid[i][j]==0&&dd[i+1][j+1]==0){
                    return 0;
                }
            }
        }
        return 1;
    }
};