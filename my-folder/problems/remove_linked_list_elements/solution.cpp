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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val == val ){
            ListNode* del = head;
            head= head -> next;
            delete(del);
        }
        ListNode* head_copy=head;
        ListNode* prev_head_copy=NULL;
        while(head_copy!=NULL){
            if(head_copy->val != val){
                prev_head_copy = head_copy;
                head_copy=head_copy->next;
            }else{
                ListNode* del=head_copy;
                head_copy=head_copy->next;
                prev_head_copy->next = head_copy;
                delete(del);
            }
        }
        return head;
        
    }
};