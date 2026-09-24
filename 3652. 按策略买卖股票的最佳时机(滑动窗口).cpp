#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        long long total =0;
        long long extra =0;
        long long max_extra =0;

        for (int i =0;i<prices.size();i++) {
            total +=strategy[i]*prices[i];
            if (i<k/2){
                continue;
            }
            extra -=strategy[i-k/2]*prices[i-k/2]; 
            extra +=(1-strategy[i])*prices[i]; 
            int left = i - k + 1;
            if (left < 0) { 
                continue;
            }
            max_extra = max(max_extra, extra);
            extra +=strategy[left]*prices[left]; 
            extra -=(1-strategy[left+k/2])*prices[left + k / 2]; 
        }
        return total + max_extra;
    }
};
