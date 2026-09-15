#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> pairSums(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int hopenum=target-nums[i];
            if(mp.find(hopenum)!=mp.end()&&mp[hopenum]){
                mp[hopenum]--;
                ans.push_back({hopenum,nums[i]});
            }
            else{
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};