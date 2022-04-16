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
    void travel(TreeNode* root, int& sum){
        if(root==NULL) return;
        if(root->right) travel(root->right, sum);
        
        sum+=root->val;
        root->val = sum;
        if(root->left) travel(root->left, sum);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        travel(root, sum);
        return root;
    }
};

//travel right if right exist, modify value and then travel left