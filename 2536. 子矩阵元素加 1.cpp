#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> dd(n+2,vector<int> (n+2));
        vector<vector<int>> mat(n,vector<int> (n));
        for(int i=0;i<queries.size();i++){
            int r1=queries[i][0],c1=queries[i][1],r2=queries[i][2],c2=queries[i][3];
            dd[r1+1][c1+1]++;
            dd[r1+1][c2+2]--;
            dd[r2+2][c1+1]--;
            dd[r2+2][c2+2]++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dd[i+1][j+1]+=dd[i+1][j]+dd[i][j+1]-dd[i][j];
                mat[i][j]=dd[i+1][j+1];
            }
        }
        return mat;
    }
};