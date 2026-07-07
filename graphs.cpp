#include<bits/stdc++.h>

using namespace std;


int main(){
    int n, m;

    cin >> n >> m;
    // adjacency matrix O(n2)
    int adj[n+1][m+1]; 

    for(int i = 0; i < m ;i++){
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

// vector<vector<int>> adjL(n + 1);
    vector<int> adjL[n+1];

    for(int i  = 0; i  < m; i++){
        int u , v;
        cin >> u >> v;

        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }

    
    return 0;
}