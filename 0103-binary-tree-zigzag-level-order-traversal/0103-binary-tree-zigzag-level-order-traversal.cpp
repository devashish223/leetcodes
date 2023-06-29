/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        if(root==NULL) return ans;
        deque<TreeNode*> q;
        bool flag=1;
        q.push_back(root);
        
        while(!q.empty()){
        int i=q.size();
        vector<int> temp;
        while(i--){
            TreeNode* p;
            if(flag==1){
            p=q.front();
            q.pop_front();
            temp.push_back(p->val);
            if(p->left) q.push_back(p->left);
            if(p->right) q.push_back(p->right);
            }
            else{
                p=q.back();
                q.pop_back();
                temp.push_back(p->val);
                if(p->right) q.push_front(p->right);
                if(p->left) q.push_front(p->left);
            }
            
        }
        ans.push_back(temp);
        if(flag==1) flag=0;
        else flag=1;
        }
     return ans;
    }
};