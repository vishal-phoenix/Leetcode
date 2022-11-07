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
        int sz = 0;
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head;
        }
        ListNode* temp = head;
        ListNode* temp2 = head;
        while(temp!=NULL){
            if(temp->next==nullptr){
                temp2 = temp;
            }
            temp = temp->next;
            sz++;
        }
        k = k%sz;
        temp = head;
        if(k==0){
            return head;
        }
        int cnt = sz-k;
        int cnt2=1;
        temp2->next = head;
        while(cnt2!=cnt){
            temp = temp->next;
            cnt2++;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};