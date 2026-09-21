#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int k=1;k<=m+n-1;k++){
            int maxj=min(n-1,m+n-1-k);
            int minj=max(0,n-k);
            vector<int> a;
            
            for(int j=minj;j<=maxj;j++){
                int i=j+k-n;
                a.push_back(mat[i][j]);
            }
            ranges::sort(a);
            for(int j=minj;j<=maxj;j++){
                int i=j+k-n;
                mat[i][j]=a[j-minj];
            }
        }
        return mat;
    }
};