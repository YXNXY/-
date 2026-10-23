#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> d(nums.size()+1);
        int s=0;
        for(auto& x:queries){
            d[x[0]]++;
            d[x[1]+1]--;
        }
        for(int i=0;i<nums.size();i++){
            s+=d[i];
            if(nums[i]>s){
                return 0;
            }
        }
        return 1;
    }
};