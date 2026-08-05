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
    vector<int> inorder(TreeNode* root){
        if(!root) return {};
        
        vector<int> res = inorder(root->left);
        res.push_back(root->val);
        vector<int> right= inorder(root->right);
        res.insert(res.end(), right.begin(), right.end());
            
        return res;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        // inorder, traversal return kth num
        int ans;
        TreeNode* temp = root;
        vector<int> order = inorder(root);
        ans = order[k-1];

        return ans;
    }
};
