#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=0;
        int minn=nums[0];
        for(int x:nums){
            ans=max(ans,x-minn);
            minn=min(minn,x);
        }
        return ans?ans:-1;
    }
};