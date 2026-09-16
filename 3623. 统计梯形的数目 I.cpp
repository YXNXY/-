#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int> mp;
        const int mod=1000000007;
        long long ans=0;
        for(int i=0;i<points.size();i++){
            mp[points[i][1]]++;
        }
        long long s=0;
        for(auto& [_,c]:mp){
            long long k=1LL*c*(c-1)/2;
            ans+=k*s;
            s+=k;
        }
        return ans%mod;
    }
};