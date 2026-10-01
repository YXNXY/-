#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        vector<long long>sum(n*2+1);
        for (int i=0;i<n*2;i++){
            sum[i+1]=sum[i]+nums[i%n];
        }
        int ans=0;
        for(int i=n;i<n*2;i++){
            if(sum[i-n/2]*2>sum[i]+sum[i-n]){
                ans++;
            }
        }
        return ans;
    }
};