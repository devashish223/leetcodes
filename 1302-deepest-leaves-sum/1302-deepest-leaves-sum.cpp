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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>>ans;

        if(root == NULL){
            return root->val;
        }
        queue<TreeNode*>q;
        q.push(root);
        int count = 0;
        while(!q.empty()){
            count++;
            int s = q.size();
            vector<int>v;
            while(s--){
            //vector<int>v;
            TreeNode* x = q.front();
            v.push_back(x->val);
            q.pop();

            if(x->left!=NULL){
                q.push(x->left);
            } 
            if(x->right!=NULL){
                q.push(x->right);
            }
            }
            ans.push_back(v);
        }
     int sum = accumulate(ans[count - 1].begin(),ans[count - 1].end(),0);
         return sum;
       // return count
    }
};