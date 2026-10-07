#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findLongestSubarray(vector<string> &array) {
        int n=array.size(),begin=0,end=0,s=n,first[n*2+1];
        memset(first,-1,sizeof(first));
        first[s]=0;
        for (int i=1;i<=n;i++){
            s+=(array[i-1][0]>>6&1)*2-1;
            int j=first[s];
            if(j<0){
                first[s] = i;
            }
            else if(i-j>end-begin){
                begin=j,end=i;
            }
        }
        return{array.begin()+begin,array.begin()+end};
    }
};