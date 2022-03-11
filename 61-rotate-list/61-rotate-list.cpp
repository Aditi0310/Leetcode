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
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == NULL || head->next == NULL || k==0) return head;
        int totalNodes = 0;
        ListNode* lastNode = head;
        ListNode* head2 = head;
        while(lastNode->next!=NULL){
            totalNodes+=1;
            lastNode=lastNode->next;
        }
        totalNodes+=1;
        if(k%totalNodes == 0) return head;
        int num = totalNodes - (k%totalNodes); //if rotation exceeds the toal no. of nodes
        int i=1;
        ListNode* temp = head;
        while(i!=num){
            temp=temp->next;
            i++;
        }
        
        head2=temp->next;
        lastNode->next = head;
        temp->next = NULL;
        
        return head2;
        
    }
};