#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s){
        int ans= 0;
        auto check=[&](int size)->bool{
            int vis= 0;
            for(int i= 0;i<points.size();i++){
                if(abs(points[i][0])<=size&&abs(points[i][1])<=size){
                    char c= s[i]-'a';
                    if(vis>>c&1) { 
                        return false;
                    }
                    vis|=1<<c; 
                }
            }
            ans= popcount(1u*vis);
            return true;
        };
        int left= -1,right= 1'000'000'001;
        while(left+1<right){
            int mid=(left+right)/2;
            (check(mid)?left:right)= mid;
        }
        return ans;
    }
};
