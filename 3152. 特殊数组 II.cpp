#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> a(queries.size());
        vector<int> s(nums.size());
        for(int i=0;i<nums.size()-1;i++){
            s[i+1]=s[i]+((nums[i+1]^nums[i]^1)&1);
        }
        for(int i=0;i<queries.size();i++){
            a[i]=s[queries[i][0]]==s[queries[i][1]];
        }
        return a;
    }
};