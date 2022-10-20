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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode* temp = head;
        ListNode* temp2 = temp->next;
        while(temp!=nullptr && temp2!=nullptr){
            ListNode* temp3 = temp2->next;
            temp2->next = temp;
            temp = temp2;
            temp2 = temp3;
        }
        head->next = nullptr;
        head = temp;
        return head;
    }
};