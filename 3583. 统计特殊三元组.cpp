#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> suf;
        unordered_map<int,int> pre;
        long long mod=1000000007;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            suf[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            suf[nums[i]]--;
            ans+=1LL*pre[nums[i]*2]*suf[nums[i]*2];
            pre[nums[i]]++;
        }
        return ans%mod;
    }
};