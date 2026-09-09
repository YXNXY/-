#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        auto check=[&](int mid)->bool{
            int i=0;
            for(int j=0;j<houses.size();j++){
                while(i<heaters.size()&&(houses[j]<heaters[i]-mid||houses[j]>heaters[i]+mid)){
                    i++;
                }
                if(i==heaters.size()){
                    return 0;
                }
            }
            return 1;
        };
        ranges::sort(heaters);
        ranges::sort(houses);
        int left=-1,right=max(heaters[heaters.size()-1]-houses[0],houses[houses.size()-1]-heaters[0]);
        while(left+1<right){
            int mid=left+(right-left)/2;
            (check(mid)?right:left)=mid;
        }
        return right;
    }
};