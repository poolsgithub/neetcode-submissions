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
int msum = INT_MIN;
public:
    int helper(TreeNode* root){
        int left = 0, right = 0;
        if(root->left){
            left = helper(root->left);
        }
        if(root->right){
            right = helper(root->right);
        }
        int sum = root->val;
        if(left > 0) sum += left;
        if(right > 0) sum += right;
        msum = max(msum, sum);
        if(left > 0 && left > right){
            return root->val + left;
        }
        else if(right > 0){
            return root->val + right;
        }
        else{
            return root->val;
        }
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return msum;
    }
};
