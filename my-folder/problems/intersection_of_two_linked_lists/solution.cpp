/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
        ListNode* temp = headA;
        while(temp!=NULL){
            st.insert(temp);
            temp = temp->next;
        }
        ListNode* temp2 = headB;
        while(temp2!=NULL){
            if(st.count(temp2)){
                return temp2;
            }
            temp2 = temp2->next;
        }
        return NULL;
    }
};