#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int minpresum=0;
        int presum=0;
        for(int x:nums){
            presum+=x;
            ans=max(ans,presum-minpresum);
            minpresum=min(minpresum,presum);
        }
        return ans;
    }
};