#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int target=k-nums[i];
            if(mp.find(target)!=mp.end()&&mp[target]){
                mp[target]--;
                ans++;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};