#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int dec=0;
        for(int x:batteryPercentages){
            dec+=x>dec;
        }
        return dec;
    }
};