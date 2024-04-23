class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        vector<int> result;
        vector<int> indegree(n);
        if(n==1) return {0};
        for(auto &i:edges){
            int u=i[0];
            int v=i[1];
            indegree[u]++;
            indegree[v]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> que;
        for(int i=0;i<n;i++){
            if(indegree[i]==1){
                que.push(i);
            }
        }
        while(n>2){
            int size=que.size();
            n-=size;
            while(size--){
                int u=que.front();
                que.pop();
                for(auto &v:adj[u]){
                    indegree[v]--;
                    if(indegree[v]==1) que.push(v);
                }
            }
        }
        while(!que.empty()){
            result.push_back(que.front());
            que.pop();
        }
        return result;
    }
};
