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
    int maxDepth(TreeNode* root) {
        // if you didn't find a node
        if (root == NULL)
        {
            // counter ends here
            return 0;
        }
        // else you found a node
        else
        {
            // increase counter, then recursively call the function by passing its left and right pointers, then return the max counter
            return 1 + max(maxDepth(root->left), maxDepth(root->right));
        }
    }
};