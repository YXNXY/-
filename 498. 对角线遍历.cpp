#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> ans;
        ans.reserve(m*n);
        for(int k=0;k<=m+n-2;k++){
            vector<int> b;
            int minj=max(0,k-m+1);
            int maxj=min(n-1,k);
            if(k%2==0){
                for(int j=minj;j<=maxj;j++){
                    int i=k-j;
                    ans.push_back(mat[i][j]);
                }
            }
            else{
                for(int j=maxj;j>=minj;j--){
                    int i=k-j;
                    ans.push_back(mat[i][j]);
                }
            }
        }
        return ans;
    }
};