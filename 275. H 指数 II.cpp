
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int left=min(citations[0],n);
        int right=min(citations[n-1],n)+1;
        while(left+1<right){
            int mid=right+(left-right)/2;
            if(citations[n-mid]>=mid){
                left=mid;
            }
            else{
                right=mid;
            }
        }
        return left;
    }
};