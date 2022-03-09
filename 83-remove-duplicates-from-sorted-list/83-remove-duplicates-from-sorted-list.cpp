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
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* temp=head;
        ListNode* prev=head;
        
        while(temp!=NULL){
            bool duplicate = false;
            while(temp->next && temp->val==temp->next->val){
                temp=temp->next;
                duplicate=true;
            }
            if(duplicate){
                prev->next=temp->next;
                temp=temp->next;
                prev=temp;
            }
            else{
                prev=temp->next;
                temp=temp->next;
            }
        }
        return head;
    }
};