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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr){
            return head;
        }
        ListNode* temp = head;
        ListNode* temp1=head->next;
        ListNode* temp2=head->next;
         while(true){
             temp->next=temp->next->next;
             if(temp1->next==nullptr){
                 break;
             }
             temp1->next = temp1->next->next;
             if(temp1->next==nullptr){
                 temp = temp->next;
                 break;
             }
             temp = temp->next;
             temp1 = temp1->next;
         }
         temp->next = temp2;
         return head;

    }
};