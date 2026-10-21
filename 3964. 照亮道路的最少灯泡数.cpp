#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minLights(vector<int>& lights) {
        int n=lights.size();
        vector<int> d(n+1);
        int ans=0,s=0;
        for(int i=0;i<n;i++){
            if(lights[i]!=0){
                d[max(i-lights[i],0)]++;
                d[min(i+lights[i]+1,n)]--;
            }
        }
        for(int i=0;i<n;i++){
            s+=d[i];
            if(s==0){
                ans++;
                s++;
                d[min(i+3,n)]--;
            }
        }
        return ans;
    }
};