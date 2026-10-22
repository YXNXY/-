#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int max=ranges::max(nums,{},[](const auto& a){return a[1];})[1];
        vector<int> d(max+2);
        for(auto& n:nums){
            int from=n[0],to=n[1];
            d[from]++;
            d[to+1]--;
        }
        int s=0,ans=0;
        for(auto& v:d){
            s+=v;
            ans+=s>0;
        }
        return ans;
    }
};