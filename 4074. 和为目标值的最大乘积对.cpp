#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int maxi=-1,maxj=-1;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(x*2==target){
                continue;
            }
            auto it=mp.find(target-x);
            if(it!=mp.end()&&(maxi<0||x*(target-x)>nums[maxi]*(target-nums[maxi]))){
                maxi=i;
                maxj=it->second;
            }
            mp[x]=i;
        }
        if(maxi>=0&&nums[maxi]<nums[maxj]){
            swap(maxi,maxj);
        }
        return {maxi, maxj};
    }
};