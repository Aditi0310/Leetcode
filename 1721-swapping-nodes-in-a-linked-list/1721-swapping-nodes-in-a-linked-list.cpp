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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *first = head;
        ListNode* second = head;
        ListNode* temp=head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int right = count - k+1;
        
        count=1;
        while(count!=k){
            first=first->next;
            count++;
        }
        
        count=1;
        while(count!=right){
            second=second->next;
            count++;
        }
        
        int value = first->val;
        first->val = second->val;
        second->val = value;
        
        return head;
    }
};