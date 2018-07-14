#include <iostream>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int r_depth = 0;
        int l_depth = 0;
        if(root==NULL){
            return 0;
        }
        if(root->right==NULL&&root->left==NULL){
            return 1;
        }
        if(root->right!=NULL){
            r_depth = maxDepth(root->right);
        }
        if(root->left!=NULL){
            l_depth = maxDepth(root->left);
        }
        return r_depth>l_depth?r_depth+1:l_depth+1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}