#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> s(arr.size()+1);
        vector<int> a(queries.size());
        for(int i=0;i<arr.size();i++){
            s[i+1]=s[i]^arr[i];
        }
        for(int i=0;i<queries.size();i++){
            a[i]=s[queries[i][1]+1]^s[queries[i][0]];
        }
        return a;
    }
};