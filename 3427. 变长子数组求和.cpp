#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int ans=0;
        vector<int> a(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            a[i+1]=a[i]+nums[i];
            int l=max(0,i-nums[i]);
            ans+=a[i+1]-a[l];
        }
        return ans;
    }
};