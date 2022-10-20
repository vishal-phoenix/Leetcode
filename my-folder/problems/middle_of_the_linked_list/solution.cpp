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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        if(head->next==nullptr){
            return head;
        }
        while(temp->next!=nullptr && temp->next->next!=nullptr){
            temp = temp->next->next;
            temp2 = temp2->next;
        }
        if(temp->next==nullptr){
            return temp2;
        }else{
            return temp2->next;
        }
    }
};