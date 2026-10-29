#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for(auto& op:operations){
            switch(op[0]){
                case '+':
                    st.push_back(st[st.size()-2]+st.back());
                    break;
                case 'D':
                    st.push_back(st.back()*2);
                    break;
                case 'C':
                    st.pop_back();
                    break;
                default:
                    st.push_back(stoi(op));
            }
        }
        return reduce(st.begin(),st.end());
    }
};