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
    bool isSymmetric(TreeNode* root) {
        // if the root is NULL
        if (root == NULL)
        {
            // the empty tree is symmetric
            return true;
        }
        // else the root is not NULL
        else
        {
            // call the function isSymmetricTest, passing the root's left and right pointers
            return isSymmetricTest(root->left, root->right);
        }
    }
    // a test function, using the TreeNode p (the left side of the Tree) and the TreeNode q (the right side of the Tree)
    bool isSymmetricTest(TreeNode* p, TreeNode* q) {
        // if the left TreeNode is NULL and the right TreeNode is NULL
        if (p == NULL && q == NULL)
        {
            // the tree is symmetric
            return true;
        }
        // else if only one of the TreeNodes, p or q, is NULL
        else if (p == NULL || q == NULL)
        {
            // the tree is not symmetric
            return false;
        }
        // else if the values of the TreeNodes, p and q, are not equal
        else if (p->val != q->val)
        {
            // the tree is not symmetric
            return false;
        }
        // else both TreeNodes, p and q, are not NULL, and the values of the TreeNodes, p and q, are equal
        else
        {
            // compare the left subtree's left  child (p->left)  with the right subtree's right child (q->right) and
            // compare the left subtree's right child (p->right) with the right subtree's left  child (q->left)
            return isSymmetricTest(p->left, q->right) && isSymmetricTest(p->right, q->left);
        }
    }
};