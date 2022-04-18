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

//inorder traversal gives the bst in sorted order. we will use stack to store the data.
class Solution {
public:
    void smallest(TreeNode* root, stack<int> &s){
        if(!root) return;
        
        if(root->right) smallest(root->right,s);
        s.push(root->val);
        if(root->left) smallest(root->left, s);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        /*stack<TreeNode*> s;
        TreeNode *node = root;
        int count = 0;
        
        while(true){
            if(node!=NULL){
                s.push(node);
                node = node->left;
            }
            else{
                if(s.empty()) break;
                node = s.top();
                s.pop();
                count++;
                if(count==k) return node->val;
                node = node->right;
            }
        }
        return -1;*/
        
        stack<int> s;
        smallest(root, s);
        
        int count =1;
        int ans;
        while(count!=k){
             s.pop();
            count++;
        }
        ans = s.top();
        return ans;
    }
    
};