#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        int ans=0,s=0;
        for (int x:nums){
            cnt[s]++;
            s=(s+x%k+k)%k;
            ans+=cnt[s];
        }
        return ans;
    }
};