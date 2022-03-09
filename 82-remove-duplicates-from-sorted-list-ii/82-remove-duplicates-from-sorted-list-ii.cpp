/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummyHead = new ListNode(0, head); //dummy->next point to head
        ListNode *prev = dummyHead, *temp = head; //prev will point to last node with no duplicate
        
        while(temp!=NULL) {
            bool isDuplicate = false;
            while(temp->next && temp->val == temp->next->val) {
                isDuplicate = true;
                temp = temp->next;
            }
            if(isDuplicate)
                prev->next = temp->next;
            else
                prev = temp;
            temp = temp->next;
        }
		
        return dummyHead->next;
    }
};