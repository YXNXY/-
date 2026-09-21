#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int k=1;k<2*n;k++){
            int jmax=min(2*n-k-1,n-1);
            int jmin=max(n-k,0);
            vector<int> a;
            for(int j=jmin;j<=jmax;j++){
               a.push_back(grid[k+j-n][j]);
            }
            if(jmin>0){
                ranges::sort(a);
            }
            else{
                ranges::sort(a,greater());
            }
            for(int j=jmin;j<=jmax;j++){
                grid[k+j-n][j]=a[j-jmin];
            }
        }
        return grid;
    }
};