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
		bool hasCycle(ListNode *head) {
			auto ptr1 = head, ptr2 = head;
			while(ptr2!=NULL) {
				ptr2 = ptr2->next;
				if(ptr1==ptr2) {
					return true;
				}
				ptr1 = ptr1->next;
				if(ptr2!=NULL) {
					ptr2 = ptr2->next;
				}
			}
			return false;
		}
};
