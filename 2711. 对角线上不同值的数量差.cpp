#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector ans(m,vector<int>(n));
        for(int k=1;k<m+n;k++){
            unsigned long long topleft=0;
            unsigned long long bottomright=0;
            int maxj=min(m+n-1-k,n-1);
            int minj=max(n-k,0);
            for(int j=minj;j<=maxj;j++){
                int i=j+k-n;
                ans[i][j]=popcount(bottomright);
                bottomright|=1ULL<<grid[i][j];
            }
            for(int j=maxj;j>=minj;j--){
                int i=j+k-n;
                ans[i][j]=abs(ans[i][j]-popcount(topleft));
                topleft|=1ULL<<grid[i][j];
            }
        }
        return ans;
    }
};