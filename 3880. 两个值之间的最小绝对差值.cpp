#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=n;
        int last[2]={-n,-n};
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(x>0){
                x--;
                ans=min(ans,i-last[x^1]);
                last[x]=i;
            }
        }
        return ans==n?-1:ans;        
    }
};