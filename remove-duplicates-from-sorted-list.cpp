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
		ListNode *deleteDuplicates(ListNode *head) {
			for(auto currentNode = head; currentNode!=NULL; currentNode = currentNode->next) {
				auto nextNode = currentNode->next;
				while(nextNode!=NULL && (currentNode->val == nextNode->val)) {
					currentNode->next = nextNode->next;
					nextNode = currentNode->next;
				}
			}
			return head;
		}
};
