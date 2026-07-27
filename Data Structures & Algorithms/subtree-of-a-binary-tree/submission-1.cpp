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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // both null return true
        if (!(p || q)) return true;
        // anyone is null return false
        if((!p) ^ (!q)) return false;
        
        if(p->val != q->val) return false;

        bool l = isSameTree(p->left,q->left);
        bool r = isSameTree(p->right,q->right);

        if(l && r) return true;
        return false;
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if((!root) && (!subRoot)) return true;
        if(!subRoot) return true;
        if((!root) ^ (!subRoot)) return false;
        
        if(root->val == subRoot->val){
            if(isSameTree(root, subRoot)) return true;        
        } 

        bool l = isSubtree(root->left, subRoot);
        bool r = isSubtree(root->right, subRoot);

        if(l || r) return true;
        return false;
    }
};
