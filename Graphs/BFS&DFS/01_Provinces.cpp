//Aman Kumar Sharma
//Number of Provinces (leetcode-547)
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& isConnected, vector<int>& vis){
    int n=isConnected.size();
    vis[node]=1;
    for(int i=0; i<n; i++){
        if(!vis[i] && isConnected[node][i]==1){
            dfs(i, isConnected, vis);
        }
    }
}
int NumberOfProvinces(vector<vector<int>>& isConnected){
    int count=0;
    int n=isConnected.size();
    vector<int>vis(n,0);

    for(int i=0; i<n; i++){
        if(!vis[i]){
            count++;
            dfs(i, isConnected, vis);
        }
    }
    return count;
}