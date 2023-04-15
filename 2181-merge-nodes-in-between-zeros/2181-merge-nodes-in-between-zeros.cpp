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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* x = head;
        vector<int>v;
        while(x != NULL){
            v.push_back(x->val);
            x = x->next;
        }
        ListNode* nxt = new ListNode();
        //vector<int>ans;
        
        x = nxt;
        int t = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                x->next = new ListNode(t);
                x = x->next;
                t = 0;
            }
            else{
                t+=v[i];
            }
            
        }
        return nxt->next->next;
    }
};