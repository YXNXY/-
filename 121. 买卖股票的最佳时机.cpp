#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best=0;
        int minp=prices[0];
        for(int x:prices){
            best=max(best,x-minp);
            minp=min(minp,x);
        }
        return best;
    }
};