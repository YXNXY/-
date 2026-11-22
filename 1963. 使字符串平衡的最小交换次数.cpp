#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(string s) {
        int c=0;
        for(char b:s){
            if(b=='['||c==0){
                c++;
            }
            else{
                c--;
            }
        }
        return c/2;
    }
};