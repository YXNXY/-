#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n);
        int s=0;
        for(auto& x:bookings){
            ans[x[0]-1]+=x[2];
            if(x[1]<n){
                ans[x[1]]-=x[2];
            }
        }
        for(int i=1;i<n;i++){
            ans[i]+=ans[i-1];
        }
        return ans;
    }
};