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
    int diameterOfBinaryTree(TreeNode* root) {
        int lt = 0;
        int diameter = 0;
        MaxDepth(root,diameter);
        lt++;
        return diameter;
        
    }
private:

   int MaxDepth(TreeNode* root, int& diameter){
   

    if(root==NULL){
        return 0;
    }

    int lh = MaxDepth(root->left,diameter);
    int rh = MaxDepth(root->right,diameter);

    diameter = max(diameter,lh+rh);

    return 1+max(lh,rh);
   }
};