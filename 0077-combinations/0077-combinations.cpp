class Solution {
public:
    //vector<vector<int>> combine(int n, int k) {
    vector<vector<int>>ans;
    void solve(vector<int>&v,int i,int k,vector<int>&count){
            if(count.size()==k){
                ans.push_back(count);
                return ;
            }
            if(i==v.size()){
                return ;
            }
              count.push_back(v[i]);
            i++;
             solve(v,i,k,count);
              count.pop_back();
              solve(v,i,k,count);
             
    }
        vector<vector<int>> combine(int n, int k) {
     vector<int>v;
     for(int i=1; i<=n;i++){
         v.push_back(i);
     }
         vector<int>count;
     solve(v,0,k,count);
          return ans;
    }
};