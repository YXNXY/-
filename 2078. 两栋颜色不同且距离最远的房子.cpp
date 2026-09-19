#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int c=colors[0];
        int n=colors.size();
        if(c!=colors[n-1]){
            return n-1;
        }
        int r=n-2;
        while(c==colors[r]){
            r--;
        }
        int l=1;
        while(c==colors[l]){
            l++;
        }
        return max(r,n-1-l);
    }
};