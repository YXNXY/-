#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> pos = {{0, -1}};
        int ans=0,s=0;
        for (int i=0;i<nums.size();i++){
            s+=nums[i]?1:-1;
            if(pos.contains(s)){
                ans=max(ans,i-pos[s]);
            }else{
                pos[s]=i;
            }
        }
        return ans;
    }
};