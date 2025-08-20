#include <bits/stdc++.h>
using namespace std;

int main() {
    // storign undirected graph
    // int u, v, N, E;
    // cin>>N>>E;
    // vector<vector<int>> graph;

    // graph.resize(N+1);

    // while(E--){
    //     cin>>u>>v;
    //     graph[u].push_back(v);
    //     graph[v].push_back(u);
    // }


    // storing undirected weighted graph
    int u, v, N, E, weight;
    cin>>N>>E;
    vector<vector<pair<int, int>>> graph;

    graph.resize(N+1);

    while(E--){
        cin>>u>>v>>weight;
        graph[u].push_back(make_pair(v, weight));
        graph[v].push_back(make_pair(u, weight));
    }









    return 0;
}
