class Solution {
	public:
		int singleNumber(int A[], int n) {
			int x(0), y(0), t(0);
			for(int i(0); i<n; ++i) {
				t = A[i]&~y;
				y &= ~A[i];
				y |= t&x;
				x ^= t;
			}
			return x;
		}
};
