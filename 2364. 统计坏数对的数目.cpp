#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int n=i-nums[i];
            ans+=i-mp[n]++;
        }
        return ans;
    }
};