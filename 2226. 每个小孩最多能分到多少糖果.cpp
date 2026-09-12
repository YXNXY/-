
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        auto check=[&](int mid)->bool{
            long long dui=0;
            for(int y:candies){
                dui+=y/mid;
            }
            if(dui<k){
                return 0;
            }
            return 1;
        };
        long long avg=reduce(candies.begin(),candies.end(),0LL)/k;
        int left=0;
        int right=min(1LL*ranges::max(candies),avg)+1;
        while(left+1<right){
            int mid=left+(right-left)/2;
            (check(mid)?left:right)=mid;
        }
        return left;
    }
};