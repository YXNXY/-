#include <vector>
#include <cstdlib>

using namespace std;
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        auto check=[&](long long mid)->bool{
            long long sum=0;
            for(int x:time){
                sum+=mid/x;
                if(sum>=totalTrips){
                    return 1;
                }
            }
            return 0;
        };
        int min_t=ranges::min(time);
        long long left=min_t-1;
        long long right=1LL*min_t*totalTrips;
        while(left+1<right){
            long long mid=left+(right-left)/2;
            (check(mid)?right:left)=mid;
        }
        return right;
    }
};