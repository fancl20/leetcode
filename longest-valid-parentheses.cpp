class Solution {
	public:
		int longestValidParentheses(string s) {
			unordered_map<int, int> count;
			count[0] = -1;
			int res(0), stack(0), lim(0);
			for(int i(0); i<s.size(); ++i) {
				if(s[i]=='(') {
					--stack;
				} else {
					++stack;
				}
				if(count.count(stack)) {
					res = max(res, i-count[stack]);
				} else {
					count[stack] = i;
				}
				for(auto &x : count) {
					if(x.first>=stack) {
						break;
					}
					count.erase(x.first);
				}
			}
			return res;
		}
};

class Solution {
	public:
		int longestValidParentheses(string s) {
			stack<int> pos;
			pos.push(-1);
			int res(0);
			for(int i(0); i<s.size(); ++i) {
				if(s[i]==')' && pos.top()!=-1 && s[pos.top()]=='(') {
					pos.pop();
					res = max(res, i-pos.top());
				} else {
					pos.push(i);
				}
			}
			return res;
		}
};
