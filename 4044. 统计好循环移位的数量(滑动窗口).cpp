#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long sum1=0,sum2=0;
        int ans=0;
        for(int i=n/2;i<n*2-1;i++){
            sum1+=nums[(i-n/2)%n];
            sum2+=nums[i%n];
            int left=i-n+1;
            if(left<0){
                continue;
            }
            if(sum1>sum2){
                ans++;
            }
            sum1-=nums[left];
            sum2-=nums[(left+n/2)%n];
        }
        return ans;
    }
};