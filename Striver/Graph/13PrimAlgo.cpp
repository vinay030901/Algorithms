#include <bits/stdc++.h>
using namespace std;

/*if the graph has exactly n nodes and n-1 edges, then it is called minimum spanning tree
every node should be reachable via every other node
there could be multiple spanning tree, but for minimum spanning tree: 

the minimum spanning tree is the one which has the minimum weights
that is, after summing up the edges, the spanning tree which has the minimum cost of edges, it is called minimum spanning tree


algorithm for prim's algo:
we will start from any element and then we will check for the adjacent nodes with the minimum edge weight
we will connect it and move
now we again check for the minimum edge weight, for the both the nodes, the one on which we are now present and the previous one
that will work similarly, we will just check for the minimum edge weight of all the nodes,
and the point when all the nodes are connected, we will stop and this would be our minimum spanning tree

a condition could arise when the minimum edge will connect to already connected, that would create a cycle
so we will take it and take the other minimum 

now we will move into the implementation part
*/

void findMinimumSpanningTree(vector<pair<int,int>>adj[],int n)
{
    vector<int>key(n,INT_MAX);
    vector<bool>mst(n,false);
    vector<int>parent(n,-1);

    key[0]=0;
    // first figure minimum value of index and that is not the part of mst, so the the start 
    // the node at index 0 has the minimum possible key, and the moment we take the key value, we mark the mst as true
    while(true)
    {
        int mn=INT_MAX;
        for(int i=0;i<key.size();i++)
        if(key[i]<mn and mst[i]==false) mn=i;
        mst[mn]=true;
        for(auto it:adj[mn])
        {
            if(mst[i])
        }
    }

}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        adj[a].push_back({b, wt});
        adj[b].push_back({a, wt});
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " --> ";
        for (auto x : adj[i])
            cout << "(" << x.first << " , " << x.second << ") ";
        cout << "\n";
    }
    int source;
    cout << "enter the source: ";
    cin >> source;
    vector<int> ans = shortestPath(source, adj, n);
    for (int i = 0; i < ans.size(); i++)
        cout << i << " " << ans[i] << endl;
}