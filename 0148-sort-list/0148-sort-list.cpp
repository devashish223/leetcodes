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
    ListNode* sortList(ListNode* head) {
        ListNode* x = head;
        vector<int>v;
        while(x!=NULL){
            v.push_back(x->val);
            x = x->next;
        }
        sort(v.begin(),v.end());
        ListNode* y = head;
        int i = 0;
        while(y!=NULL){
            y->val = v[i];
            y = y->next;
            i++;
        }
        
        return head;
    }
};