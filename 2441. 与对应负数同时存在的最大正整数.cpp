#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> s;
        int ans=-1;
        for(int i:nums){
            if(s.count(-i)){
                ans=max(abs(i),ans);
            }
            s.insert(i);
        }
        return ans;
    }
};