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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode * temp=head;
        vector <int> vect;
        while(temp!=NULL){
            vect.push_back(temp->val);
            temp=temp->next;
        }
        reverse(vect.begin()+m-1,vect.begin()+n);
        ListNode * dummy=new ListNode(-1);
        ListNode * d=dummy;
        for(int i=0;i<vect.size();i++){
            ListNode * newnode = new ListNode(vect[i]);
            dummy->next=newnode;
            dummy=dummy->next;
        }
        return d->next;
    }
};