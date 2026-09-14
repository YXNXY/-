#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int ans=0;
        int minnum=10000,maxnum=-10000;
        for(auto& a:arrays){
            ans=max({ans,a.back()-minnum,maxnum-a[0]});
            minnum=min(minnum,a[0]);
            maxnum=max(maxnum,a.back());
        }
        return ans;
    }
};