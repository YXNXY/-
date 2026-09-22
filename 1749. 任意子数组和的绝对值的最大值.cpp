#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int s=0,mx=0,mn=0;                                                         
        for(int x:nums){
            s+=x;
            mx=max(s,mx);
            mn=min(s,mn);
        }
        return mx-mn;
    }
};