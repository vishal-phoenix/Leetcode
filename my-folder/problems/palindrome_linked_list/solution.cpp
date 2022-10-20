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
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return 0;
        }
        ListNode* temp = head;
        string t = "";
        while(temp!=NULL){
            int x = temp->val;
            string c = to_string(x);
            t+=c;
            temp = temp->next;
        }
        string g = t;
        reverse(g.begin(),g.end());
        if(g==t){
            return 1;
        }else{
            return 0;
        }
    }
};