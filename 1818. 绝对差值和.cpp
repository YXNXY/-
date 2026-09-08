#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static constexpr int mod = 1000000007;
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rec(nums1);
        ranges::sort(rec);
        int sum=0,maxn=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            int diff=abs(nums1[i]-nums2[i]);
            sum=(sum+diff)%mod;
            int j=ranges::lower_bound(rec,nums2[i])-rec.begin();
            if(j<n){
                maxn=max(maxn,diff-(rec[j]-nums2[i]));
            }
            if(j>0){
                maxn=max(maxn,diff-(nums2[i]-rec[j-1]));
            }
        }
        return (sum-maxn+mod)%mod;
    }
};