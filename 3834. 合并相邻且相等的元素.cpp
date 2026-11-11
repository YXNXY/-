#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> stk;
        for(long long x:nums){
            while(!stk.empty()&&stk.back()==x){
                stk.pop_back();
                x*=2;
            }
            stk.push_back(x);
        }
        return stk;
    }
};