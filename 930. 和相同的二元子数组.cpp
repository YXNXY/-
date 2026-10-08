#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0;
        int sum1=0,sum2=0;
        int left1=0,left2=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            while(i>=left1&&sum1>=goal){
                sum1-=nums[left1];
                left1++;
            }
            ans+=left1;
            sum2+=nums[i];
            while(sum2>goal){
                sum2-=nums[left2];
                left2++;
            }
            ans-=left2;
        }
        return ans;
    }
};