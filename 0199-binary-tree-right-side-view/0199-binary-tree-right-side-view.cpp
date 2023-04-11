class Solution {
public:
    vector<int> ans;
    void RightView(TreeNode* root, int level){
        if(root == NULL){
            return;
        }
        if(level == ans.size()){
            ans.push_back(root->val);
        }
        RightView(root->right, level+1);
        RightView(root->left, level+1);
    }

    vector<int> rightSideView(TreeNode* root) {

        RightView(root, 0);

        return ans;
            
        }
    
};