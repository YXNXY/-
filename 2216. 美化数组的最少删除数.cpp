#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans=0,k=0,last=0;
        if(nums.size()==0){
            return 0;
        }
        for(int x:nums){
            if(k%2==0||x!=last){
                last=x;
                k++;
            }
            else{
                ans++;
            }
        }
        return k%2==0?ans:ans+1;
    }
};