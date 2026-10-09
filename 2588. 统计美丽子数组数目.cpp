#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int,int> cnt{{0,1}};
        long long ans=0;
        int s=0;
        for(int x:nums){
            s^=x;
            ans+=cnt[s]++;
        }
        return ans;
    }
};