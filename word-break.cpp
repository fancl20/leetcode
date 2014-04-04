class Solution {
	public:
		bool wordBreak(string s, unordered_set<string> &dict) {
			vector<bool> checked(s.size());
			for(int i(0); i<s.size(); ++i) {
				for(int j(0); i+j<s.size(); ++j) {
					if(checked[i+j]) {
						continue;
					}
					if(dict.count(s.substr(i,j+1))) {
						checked[i+j] = true;
					}
				}
				while(i<s.size() && !checked[i]) {
					++i;
				}
			}
			return checked.back();
		}
};
