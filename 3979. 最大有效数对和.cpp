#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=0,maxnum=0;
        for(int j=k;j<nums.size();j++){
            maxnum=max(nums[j-k],maxnum);
            ans=max(ans,nums[j]+maxnum);
        }
        return ans;
    }
};