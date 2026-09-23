#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();
        vector<long long> s(n+1);
        vector<long long> p(n+1);
        for(int i=0;i<prices.size();i++){
            s[i+1]=s[i]+prices[i]*strategy[i];
            p[i+1]=p[i]+prices[i];
        }
        long long ans=s[n];
        for(int i=k;i<=n;i++){
            ans=max(ans,s[i-k]+p[i]-p[i-k/2]+s[n ]-s[i]);
        }
        return ans;
    }
};