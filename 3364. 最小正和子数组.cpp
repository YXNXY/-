#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> s(nums.size()+1);
        multiset<int> cnt;
        int ans=INT_MAX;
        for(int i=1;i<=nums.size();i++){
            s[i]=s[i-1]+nums[i-1];
            if(i<l){
                continue;
            }
            cnt.insert(s[i-l]);
            auto it=cnt.lower_bound(s[i]);
            if(it!=cnt.begin()){
                ans=min(ans,s[i]-*--it);
            }
            if(i>=r){
                cnt.erase(cnt.find(s[i-r]));
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};