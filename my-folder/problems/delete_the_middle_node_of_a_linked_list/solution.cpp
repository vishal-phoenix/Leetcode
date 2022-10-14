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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return nullptr;
        }
        int sze = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            sze++;
            temp = temp->next;
        }
        sze = sze/2;
        ListNode* ans,*bl = head;
        while(sze--){
            ans = bl;
            bl  = bl->next;
        }
        ans->next = ans->next->next;
        return head;
    }
};