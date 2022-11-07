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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==0 || k==1){
            return head;
        }
        ListNode* temp = head;
        ListNode* temp2 = head;
        ListNode* temp3;
        int ct = 0;
        ListNode* hd = head;
        while(temp2!=nullptr){
            int cnt = 1;
            bool check = false;
            while(cnt!=k){
                if(temp2->next==nullptr){
                    check = true;
                    break;
                }
                temp2 = temp2->next;
                cnt++;
            }
            if(check){
                break;
            }
            temp3 = temp2->next;
            ListNode* ft = temp;ListNode* sc = temp->next;ListNode* th;
            while(ft!=temp3 && sc!=temp3){
                th = sc->next;
                sc->next = ft;
                ft = sc;
                sc = th;
            }
            temp->next = temp3;
            if(ct!=0){
                hd->next = temp2;
            }
            hd = temp;
            if(ct==0){
                head = temp2;
                ct++;
            }
            temp2 = temp3;
            temp = temp2;
        }
        return head;
    }
};