#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        int maxsum=0;
        int premax=0;
        for(int x:nums){
            ans=max(ans,1LL*x*maxsum);
            maxsum=max(maxsum,premax-x);
            premax=max(premax,x);
        }
        return ans;
    }
};