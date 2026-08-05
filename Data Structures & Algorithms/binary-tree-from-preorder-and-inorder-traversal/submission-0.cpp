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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int pre, int in, int end){
        if(pre >= preorder.size() || in > end){
            return nullptr;
        }

        int rootval = preorder[pre];
        TreeNode* root = new TreeNode(rootval);
        int rootindex;

        for(int i = in; i <= end; i++){
            if(inorder[i] == rootval){
                rootindex = i;
                break;
            }           
        }

        int leftsize = rootindex - in;
        root->left = helper(preorder, inorder, pre + 1, in, rootindex -1);
        root->right = helper(preorder, inorder, pre + leftsize + 1, rootindex + 1, end);

        return root;

    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, 0, inorder.size()-1);
    }
};
