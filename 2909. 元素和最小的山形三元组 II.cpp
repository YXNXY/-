#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> suf(n);
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>1;i--){
            suf[i]=min(suf[i+1],nums[i]);
        }
        int pre=nums[0];
        int ans=INT_MAX;
        for(int i=1;i<n-1;i++){
            if(nums[i]>suf[i+1]&&nums[i]>pre){
                ans=min(ans,suf[i+1]+nums[i]+pre);
            }
            pre=min(pre,nums[i]);
        }
        return ans==INT_MAX?-1:ans;
    }
};
