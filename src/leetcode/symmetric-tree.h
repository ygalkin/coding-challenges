// https://leetcode.com/problems/symmetric-tree/

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
    bool is_symmetric(TreeNode* node1, TreeNode* node2) {
        if (!node1 && !node2) return true;
        if (!node1 || !node2) return false;
        if (node1->val != node2->val) return false;
        return is_symmetric(node1->right, node2->left) && is_symmetric(node1->left, node2->right);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return is_symmetric(root->left, root->right);
    }
};