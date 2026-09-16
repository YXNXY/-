#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int maxnum=0;
            while(temp!=0){
                maxnum=max(maxnum,temp%10);
                temp/=10;
            }
            if(mp.count(maxnum)){
                ans=max(ans,nums[i]+mp[maxnum]);
            }
            mp[maxnum]=max(mp[maxnum],nums[i]);
        }
        return ans;
    }
};