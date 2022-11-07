/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr){
            return head;
        }
        Node *temp = head;
        Node* newnode = new Node(temp->val);
        Node* temp2 = newnode;
        unordered_map<Node*,Node*>mp;
        mp[temp] = temp2;
        temp = temp->next;
        while(temp!=NULL){
            Node* nwnode = new Node(temp->val);
            mp[temp] = nwnode;
            temp2->next = nwnode;
            temp2 = temp2->next;
            temp = temp->next;
        }
        temp = head;
        temp = newnode;
        temp2 = head;
        while(temp2!=nullptr){
            // cout<<temp2<<" "<<mp[temp2]<<endl;
            temp->random = mp[temp2->random];
            temp2 = temp2->next;
            temp = temp->next;
        }
        return newnode;
        
    }
};