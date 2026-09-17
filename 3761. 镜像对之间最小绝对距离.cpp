#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int reverse=0;
            int temp=nums[i];
            while(temp!=0){
                reverse*=10;
                reverse+=temp%10;
                temp/=10;
            }
            if(mp.find(nums[i])!=mp.end()){
                ans=min(ans,abs(i-mp[nums[i]]));
            }
            mp[reverse]=i;
        }
        return ans==INT_MAX?-1:ans;
    }   
};

