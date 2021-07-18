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
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> res;
      if (!root) return res;

      stack<TreeNode *> s;
      TreeNode *cur = root;
      while (cur || !s.empty()) {
        if (cur) {
          s.push(cur);
          cur = cur->left;
        } else {
          cur = s.top();
          s.pop();
          res.push_back(cur->val);
          cur = cur->right;
        }
      }

      return res;        
    }
};