#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> s(n+1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            s[i+1]=s[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            ans[i]=s[n]-2*s[i]-(n-2*i)*nums[i];
        }
        return ans;
    }
};