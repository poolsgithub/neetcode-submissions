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
    pair<int,int> helper(TreeNode* root, int diameter){
        if(!root) return {0,0};

        pair<int,int> left = helper(root -> left, diameter);
        if(diameter < left.second) diameter = left.second;

        pair<int,int> right = helper(root -> right, diameter);
        if(diameter < right.second) diameter = right.second;

        if(diameter < left.first + right.first){
            diameter = left.first + right.first;
        }

        int temp = max(left.first, right.first) + 1 ;

        return {temp, diameter};
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int> a;
        a = helper(root, INT_MIN);
        return a.second; 
    }
};
