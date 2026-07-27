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
        // find the parent that divides them , small < val < large
        // find any node p or q return it as LCA
        if(root == p) return p;
        if(root == q) return q;

        int small = p->val;
        int big = q->val;

        if(big < small){
            int temp = big;
            big = small;
            small = temp;
        }

        if(root->val > big){
            return lowestCommonAncestor(root->left, p, q);
        }
        if(root->val > small && root->val < big){
            return root;
        }
        if(root->val < small){
            return lowestCommonAncestor(root->right, p, q);
        }

    }
};
