#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumK(vector<int>& nums) {
        int n = nums.size();
        long long total = reduce(nums.begin(), nums.end(), 0LL);
        auto non_positive=[&](int mid)->long long{
            long long sum=0;
            for(int x:nums){
                sum+=((x-1)/mid+1);
            }
            return sum;
        };
        int left=max(ceil(sqrt(n)),ceil(cbrt(total)))-1;
        int right=ceil(sqrt(non_positive(left+1)));
        while(left+1<right){
            int mid=left+(right-left)/2;
            (non_positive(mid)<=1LL*mid*mid?right:left)=mid;
        }
        return left+1;
    }
};