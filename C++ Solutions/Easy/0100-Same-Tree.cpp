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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if the p TreeNode is NULL and the q TreeNode is NULL
        if (!p && !q)
        {
            // the tree is the same
            return true;
        }
        // else if only one of the TreeNodes, p or q, is NULL
        else if (!p || !q)
        {
            // the tree is not the same
            return false;
        }
        // else both TreeNodes, p and q, are not NULL
        else
        {
            // compare p's value         with q's value         and
            // compare p's left  subtree with q's left  subtree and
            // compare p's right subtree with q's right subtree
            return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};