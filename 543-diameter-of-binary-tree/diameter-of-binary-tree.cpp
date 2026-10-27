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
int height(TreeNode* root){
    if(root==NULL)
        return 0;
        int LH = height(root->left);
        int RH = height(root->right);
    return max(LH,RH)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;
        int LD = diameterOfBinaryTree(root->left);
        int RD = diameterOfBinaryTree(root->right);
        int CD = height(root->left) + height(root->right);
        return max(CD, max(LD,RD));
    }
};