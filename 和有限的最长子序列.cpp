#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        ranges::sort(nums);
        partial_sum(nums.begin(),nums.end(),nums.begin());
        for(int &q:queries){
            q=ranges::upper_bound(nums,q)-nums.begin();
        }
        return queries;
    }
};
int main(){
        vector<int> nums={2,3,4,5};
        vector<int> queries={1,3,4,5};
        Solution s;
        vector<int> ans=s.answerQueries(nums,queries);
        for(int i:ans){
            cout<<i<<endl;
        }

system("pause");
return 0;

}