//Aman Kumar Sharma
//DFS of Graph
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& list){
    vis[node]=1;
    list.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis, list);
        }
    }
}
vector<int>dfsOfGraph(vector<vector<int>>adj){
    int n=adj.size();
    vector<int>vis(n,0);
    int start=0;
    vector<int>list;
    dfs(start, adj, vis, list);
    return list;
}