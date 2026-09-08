#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        auto check=[&](int mid)->bool{
            int sum=0;
            for(int x:nums){
                sum+=(x+mid-1)/mid;
                if(sum>threshold){
                    return 0;
                }
            }
            return 1;
        };
        int l=0,r=ranges::max(nums);
        while(l+1<r){
            int mid=l+(r-l)/2;
            (check(mid)?r:l)=mid;
        }
        return r;
    }
};