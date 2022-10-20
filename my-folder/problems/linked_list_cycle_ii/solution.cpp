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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* temp2 = head;
        unordered_set<ListNode*> st;
        st.insert(temp);
        while(temp!=NULL){
            temp2 = temp->next;
            if(st.count(temp2)){
                return temp2;
            }
            st.insert(temp2);
            temp = temp->next;
        }
        return NULL;
    }
};