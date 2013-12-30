/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	public:
		vector<int> preorderTraversal(TreeNode *root) {
			vector<int> res;
			if(root==NULL) {
				return res;
			}
			res.push_back(root->val);
			auto leftRes = preorderTraversal(root->left);
			auto rightRes = preorderTraversal(root->right);
			res.insert(res.end(), leftRes.begin(), leftRes.end());
			res.insert(res.end(), rightRes.begin(), rightRes.end());
			return res;
		}
};
