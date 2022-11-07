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
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        ListNode* temp = first;
        ListNode* temp2;
        string g = "";
        while(temp!=NULL){
            int x = temp->val;
            g+=to_string(x);
            temp = temp->next;
        }
        string h = "";
        temp = second;
        while(temp!=NULL){
            int x = temp->val;
            h+= to_string(x);
            temp = temp->next;
        }
        int lenft = g.length();
        int rgtsc = h.length();
        int i = 0,j=0;
        
        // int i = lenft-1,j = rgtsc-1;
        string ans = "";
        int cary = 0;
        while(i<lenft && j<rgtsc){
            int x = g[i]-'0',y=h[j]-'0';
            int sum = x+y+cary;
            cary = sum/10;
            int z = sum%10;
            ans  = ans+to_string(z);
            i++;j++;
        }
        while(i<lenft){
            int x = g[i]-'0';
            int sum = x+cary;
            cary = sum/10;
            int z = sum%10;
            ans = ans+to_string(z);
            i++;
        }
        while(j<rgtsc){
            int x = h[j]-'0';
            int sum = x+cary;
            cary = sum/10;
            int z = sum%10;
            ans += to_string(z);
            j++;
        }
       //  cout<<ans<<endl;
        bool check = false;
        if(cary!=0){
            ans += to_string(cary);
            check = true;
        }
        i=0;
        ListNode* newnode;
        if(lenft>rgtsc){
            temp = first;
        }else{
            temp = second;
        }
        while(temp!=NULL){
            int x = ans[i]-'0';
            temp->val = x;
            temp2 = temp;
            temp = temp->next;
            
            i++;
        }
        if(check){
            newnode = new ListNode(ans[i]-'0');
        }
        ListNode* head;
        if(lenft>rgtsc){
            head = first;
        }else{
            head = second; 
        }

        if(check){
            temp2->next = newnode;
        }
        return head;
    }
};