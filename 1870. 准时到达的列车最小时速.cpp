#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        long long h100=round(hour*100);
        long long delta=h100-(n-1)*100;
        if(delta<=0){
            return -1;
        }
        int max_dist=ranges::max(dist);
        if(h100<=n*100){
            return max(max_dist,(int)((dist.back()*100+delta-1)/delta));
        }
        auto check=[&](int mid)->bool{
            long long sum=0;
            for(int i=0;i<n-1;i++){
                sum+=(dist[i]+mid-1)/mid;
            }
            return (sum*mid+dist.back())*100<=h100*mid;
        };
        long long sum_dist=reduce(dist.begin(),dist.end(),0LL);
        int left=(sum_dist*100-1)/h100;
        int h=h100/(n*100);
        int right=(max_dist+h-1)/h;
        while(left+1<right){
            int mid=left+(right-left)/2;
            (check(mid)?right:left)=mid;
        }
        return right;
    }
};