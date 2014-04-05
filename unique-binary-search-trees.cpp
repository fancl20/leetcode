/*
 * https://en.wikipedia.org/wiki/Catalan_number
 * */
class Solution {
	public:
		int numTrees(int n) {
			int res(1);
			for(int i(0); i<n; ++i) {
				int tmp = __gcd(res, i+2);
				res /= tmp;
				tmp = (i+2)/tmp;
				res *= 2*(2*i+1)/tmp;
			}
			return res;
		}
};
