class Solution {
	public:
		int search(int A[], int n, int target) {
			int left = 0, right = n-1;
			while(A[left]>A[right]) {
				int middle = (left+right)/2;
				if(A[middle]>=A[left]) {
					left = middle + 1;
				} else {
					right = middle;
				}
			}
			int endPos = left;
			auto leftRes = lower_bound(A,A+endPos,target);
			if(leftRes!=A+endPos && *leftRes==target) {
				return leftRes-A;
			}
			auto rightRes = lower_bound(A+endPos,A+n,target);
			if(rightRes!=A+n && *rightRes==target) {
				return rightRes-A;
			}
			return -1;
		}
};
