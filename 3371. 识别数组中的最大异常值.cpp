#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0;
        int maxodd=-1001;
        for(int x:nums){
            sum+=x;
            mp[x]++;
        }
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            mp[nums[i]]--;
            if(mp.find(sum/2)!=mp.end()&&(sum%2==0)&&mp[sum/2]){
                maxodd=max(maxodd,nums[i]);
            }
            sum+=nums[i];
            mp[nums[i]]++;
        }  
        return maxodd;
    }
};