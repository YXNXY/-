
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

class Solution {
public:
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>> answer;
        vector<int> a;
        auto dfs=[&](this auto&& dfs,TreeNode* node)->void{
            if(node==nullptr){
                return;
            }
            dfs(node->left);
            a.push_back(node->val);
            dfs(node->right);
        };
        dfs(root);
        int n=a.size();
        for(int q:queries){
            int j=ranges::lower_bound(a,q)-a.begin();
            int mx=j<n?a[j]:-1;
            if(j==n||a[j]!=q){
                j--;
            }
            int mn=j>=0?a[j]:-1;
            answer.push_back({mn,mx});
        }
        return answer;
    }
};