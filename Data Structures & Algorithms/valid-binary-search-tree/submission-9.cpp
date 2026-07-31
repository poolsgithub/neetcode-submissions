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
   private:
    bool helper(TreeNode* root, int high, int low) {
        if (!root) return true;
        if (high == low) return false;
        if (root->val <= low || root->val >= high)
            return false;

        TreeNode *p = root->left, *q = root->right;

        if (p) {
            if (p->val >= root->val) return false;
            if(q){
                if (p->val == q->val) {
                    return false;
                }
            }
        }
        if (q) {
            if (q->val <= root->val) return false;
        }

        bool l = helper(root->left, root->val, low);
        bool r = helper(root->right, high, root->val);

        if (l && r) return true;

        return false;
    }

   public:
    bool isValidBST(TreeNode* root) {
        // range is now -infinty to infinity
        int high = INT_MAX;
        int low = INT_MIN;

        bool ans = helper(root, high, low);

        return ans;
    }
};
