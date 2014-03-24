/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
	public:
		ListNode *sortList(ListNode *head) {
			int len(0);
			for(auto cur = head; cur!=NULL; cur = cur->next) {
				++len;
			}
			return sort(head, len);
		}
	private:
		ListNode *merge(ListNode *x, ListNode *y) {
			if(x==NULL) {
				return y;
			} else if(y==NULL) {
				return x;
			}
			if(x->val > y->val) {
				swap(x, y);
			}
			x->next = merge(x->next, y);
			return x;
		}
		ListNode *split(ListNode *head, int len) {
			ListNode *pre;
			for(int i = 0; i<len/2; ++i) {
				pre = head;
				head = head->next;
			}
			pre->next = NULL;
			return head;
		}
		ListNode *sort(ListNode *head, int len) {
			if(len<=1) {
				return head;
			}
			auto left = head, right = split(head, len);
			left = sort(left, len/2);
			right = sort(right, (len+1)/2);
			return merge(left, right);
		}
};
