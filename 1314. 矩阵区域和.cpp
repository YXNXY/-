#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>> ss(n+1,vector<int>(m+1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ss[i+1][j+1]=ss[i+1][j]+ss[i][j+1]-ss[i][j]+mat[i][j];
            }
        }
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            int r1=max(0,i-k),r2=min(n-1,i+k);
            for(int j=0;j<m;j++){
                int c1=max(0,j-k),c2=min(m-1,j+k);
                ans[i][j]=ss[r2+1][c2+1]-ss[r2+1][c1]-ss[r1][c2+1]+ss[r1][c1];
            }
        }
        return ans;
    }
};