class Solution {
	public:
		int reverse(int x) {
			int y = abs(x), res(0);
			while(y!=0) {
				res*=10;
				res+=y%10;
				y/=10;
			}
			return x<0?-res:res;
		}
};
