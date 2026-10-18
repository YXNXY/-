#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAliveYear(vector<int>& birth, vector<int>& death) {
        int d[102]{};
        int maxyear=0,maxnum=0;
        int s=0;
        for(auto& bth:birth){
            d[bth-1900]++;
        }
        for(auto& dth:death){
            d[dth-1899]--;
        }
        for(int i=0;i<=100;i++){
            s+=d[i];
            if(s>maxnum){
                maxnum=s;
                maxyear=i+1900;
            }
        }
        return maxyear;
    }
};