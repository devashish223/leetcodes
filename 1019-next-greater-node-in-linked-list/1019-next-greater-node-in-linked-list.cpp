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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* x = head;
        vector<int>v;
        while(x!=NULL){
            v.push_back(x->val);
            x = x->next;
        }
        int n = v.size();
        stack<int>s;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                s.push(v[i]);
                continue;
            }
            while(!s.empty() && s.top()<=v[i]){
                s.pop();
            }
            if(!s.empty()){
                ans[i] = s.top();
            }
            s.push(v[i]);
        }
        
        return ans;
    }
};