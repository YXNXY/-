#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> exsist;
        for(int j=0;;j++){
            auto it= exsist.find(target-nums[j]);
            if(it!=exsist.end()){
                return {it->second,j};
            }
            exsist[nums[j]]=j;
        }
    }
}; 