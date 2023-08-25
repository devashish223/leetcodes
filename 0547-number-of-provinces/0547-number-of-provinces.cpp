class Solution {
public:
    void dfs(int node,vector<int>adjls[],int vis[]){
        vis[node] = 1;
        for(auto i:adjls[node]){
            if(vis[i]==0){
                dfs(i,adjls,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected[0].size();
        vector<int>adjls[n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int vis[n];
        for(int i = 0;i<n;i++){
            vis[i] = 0;
        }
        int count = 0;
        
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,adjls,vis);
            }
        }
        
        return count;
    }
};