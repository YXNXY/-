#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int> mp;
        long long ans=0;
        for(int i=0;i<rectangles.size();i++){
            int c=gcd(rectangles[i][0],rectangles[i][1]);
            int w=rectangles[i][0]/c;
            int h=rectangles[i][1]/c;
            ans+=mp[{w,h}]++;
        }
        return ans;
    }
};