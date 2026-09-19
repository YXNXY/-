#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans(nums.size());
        int cnt[2]{};
        for(int i=nums.size()-1;i>=0;i--){
            int x=nums[i]&1;
            ans[i]=cnt[x^1];
            cnt[x]++;
        }
        return ans;
    }
};