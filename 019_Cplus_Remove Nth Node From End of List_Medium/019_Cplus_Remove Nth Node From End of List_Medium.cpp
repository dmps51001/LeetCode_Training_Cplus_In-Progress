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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		int iTotal = 0;
		ListNode*pTemp = head;
		ListNode*pDelete = NULL;
		ListNode*pSave = NULL;
		while (pTemp != NULL)
		{
			pTemp = pTemp->next;
			iTotal++;
		}
		pTemp = head;
		for (int i = 0; i<iTotal - n - 1; i++)
		{
			pTemp = pTemp->next;
		}
		if (iTotal == n)
		{
			head = head->next;
		}
		pDelete = pTemp->next;
		pSave = pDelete->next;
		pTemp->next = pSave;
		delete pDelete;
		return head;
	}
};