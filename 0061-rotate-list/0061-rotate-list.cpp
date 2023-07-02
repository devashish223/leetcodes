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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        vector<int>v;
        ListNode* x = head;
        while(x!=NULL){
            v.push_back(x->val);
            x = x->next;
        }
        if(k>v.size()){
            k%=v.size();
        }
        vector<int>res;
        for(int i =0;i<v.size();i++){
            if(i<k){
                res.push_back(v[v.size()+i-k]);
            }
            else{
                res.push_back(v[i-k]);
            }
        }
        ListNode* y = head;
        int i = 0;
        while(y!=NULL){
            y->val = res[i];
            i++;
            y = y->next;
        }
        
        return head;
    }
};