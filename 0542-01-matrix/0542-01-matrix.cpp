class Solution {
public:
    bool ispossible(int i,int j,int n,int m,vector<vector<int>>&arr,vector<vector<bool>>&visited){
        
        if(i<0 || j<0 || i>=n || j>=m || visited[i][j]==true){
            return false;
        }
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& arr) {
        
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>> ans(n,vector<int>(m,-1));
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    pair<int,int> p;
                    p.first=i;
                    p.second=j;
                    q.push({p,0});
                    visited[i][j]=true;
                }
            }
        }
        while(q.size()!=0){
            
            pair<pair<int,int>,int> front=q.front();
            q.pop();
            int i=front.first.first;
            int j=front.first.second;
            int d=front.second;
            ans[i][j]=d;
            if(ispossible(i-1,j,n,m,arr,visited)){
                visited[i-1][j]=true;
                q.push({{i-1,j},d+1});
            }
            if(ispossible(i+1,j,n,m,arr,visited)){
                visited[i+1][j]=true;
                q.push({{i+1,j},d+1});
            }
            if(ispossible(i,j-1,n,m,arr,visited)){
                visited[i][j-1]=true;
                q.push({{i,j-1},d+1});
            }
            if(ispossible(i,j+1,n,m,arr,visited)){
                visited[i][j+1]=true;
                q.push({{i,j+1},d+1});
            }
        }
        return ans;
    }
};