#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        int ans=0,s1=0,s2=nums.size();
        unordered_map<long long,int> cnt;
        cnt[1LL*s1<<32|s2]=-1;
        for(int i=0;i<nums.size();i++){
            s1^=nums[i];
            s2+=nums[i]%2?1:-1;
            long long key=1LL*s1<<32|s2;
            if(auto it=cnt.find(key);it!=cnt.end()){
                ans=max(ans,i-it->second);
            }
            else{ 
                cnt[key]=i;
            }
        }
        return ans;
    }
};