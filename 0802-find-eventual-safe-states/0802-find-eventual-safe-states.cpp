class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int cur, vector<bool>& visited, vector<bool>& hasCycle){
        if (hasCycle[cur]){
            return true;
        }
        if (visited[cur]){
            return false;
        }
        visited[cur] = true;
        hasCycle[cur] = true;
        for(int nxt: graph[cur]){
            if (dfs(graph, nxt, visited, hasCycle)){
                return true;
            }
        }
        hasCycle[cur] = false;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        vector<bool> visited(graph.size(), false), hasCycle(graph.size(), false);
        for(int i=0; i<graph.size(); i++){
            dfs(graph, i, visited, hasCycle);
        }
        for(int i=0; i<graph.size(); i++){
            if (!hasCycle[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};