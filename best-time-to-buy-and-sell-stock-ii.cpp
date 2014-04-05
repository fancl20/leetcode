class Solution {
	public:
		int maxProfit(vector<int> &prices) {
			int pre(INT_MAX), profit(0);
			for(int x : prices) {
				profit += max(x-pre, 0);
				pre = x;
			}
			return profit;
		}
};
