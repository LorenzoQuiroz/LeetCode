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
    // vec, a vector of integers, will hold the inorder traversal of the root's nodes' values
    vector<int> vec;
    // given the current root
    vector<int> inorderTraversal(TreeNode* root) {
        // if the root is a null pointer
        if (root == nullptr)
        {
            // return an empty list
            return {};
        }
        // recursively traverse the current node's left subtree by calling the function inorderTraversal using the root's left value, root->left
        inorderTraversal(root->left);
        // add the current node's value, root->val, to the end of the vector vec
        vec.push_back(root->val);
        // recursively traverse the current node's right subtree by calling the function inorderTraversal using the root's right value, root->right
        inorderTraversal(root->right);
        // return vec, a vector of integers, holding the inorder traversal of the root's nodes' values
        return vec;
    }
};