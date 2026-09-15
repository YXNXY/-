#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSum(vector<int>& nums){
        unordered_map<int,int> map;
        int ans =-1;
        for(int i=0;i<nums.size();i++){
            int numadd=0;
            for(int x=nums[i];x;x/=10){
                numadd+=x%10;
            }
            if(map.find(numadd)!=map.end()){
                ans=max(ans,map[numadd]+nums[i]);
            }
            map[numadd]=max(map[numadd],nums[i]);
        } 
        return ans;
    }
};