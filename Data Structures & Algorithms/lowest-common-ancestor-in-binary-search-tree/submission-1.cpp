/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int small = min(p->val, q->val);
        int big = max(p->val, q->val);

        TreeNode *cur = root;
        while(cur){
            int v = cur->val;
            if(v  < small){
                cur = cur->right;
            }
            else if(v > big){
                cur = cur->left;
            }
            else return cur;
        }
        return nullptr;
    }
};
