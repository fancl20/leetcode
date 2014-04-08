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
		vector<int> inorderTraversal(TreeNode *root) {
			if(root==NULL) {
				return vector<int>();
			}
			auto res = inorderTraversal(root->left);
			res.push_back(root->val);
			auto leftRes = inorderTraversal(root->right);
			res.insert(res.end(), leftRes.begin(), leftRes.end());
			return res;
		}
};
