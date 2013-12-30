class Solution {
	public:
		vector<vector<int> > combinationSum2(vector<int> &num, int target) {
			sort(num.begin(), num.end());
			map<int, vector<vector<int> >, greater<int> > combinations;
			for(auto x : num) {
				if(x>target) {
					break;
				}
				for(auto &combinationPair : combinations) {
					int sum = combinationPair.first;
					auto &combinationSet = combinationPair.second;
					int des = sum+x;
					if(des<=target) {
						for(auto combination : combinationSet) {
							combination.push_back(x);
							combinations[des].push_back(combination);
						}
					}
				}
				combinations[x].push_back(vector<int>(1, x));
			}
			auto &res = combinations[target];
			sort(res.begin(), res.end());
			res.erase(unique(res.begin(), res.end()), res.end());
			return res;
		}
};
