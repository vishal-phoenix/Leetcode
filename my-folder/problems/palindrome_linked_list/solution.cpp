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
        vector<int> ans;
        while(head!=nullptr){
            ans.push_back(head->val);
            head=head->next;
        }
        int x = ans.size();
        if(x%2==0){
            for(int i=0;i<x/2;i++){
                if(ans[i]!=ans[x-1-i]){
                    return false;
                }
            }
        }else{
            int y=x/2;
            for(int i=0;i<y;i++){
                if(ans[i]!=ans[x-1-i]){
                    return false;
                }
            }
        }
        return true;
    }
};