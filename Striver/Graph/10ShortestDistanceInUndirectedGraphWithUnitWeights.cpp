#include <bits/stdc++.h>
using namespace std;
vector<int> shortestDistance(vector<int>adj[], int n)
{
    vector<int>dis(n,INT_MAX);
    queue<int>q;
    int source;
    cout<<"input the source: ";
    cin>>source;
    dis[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int node= q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(dis[node]+1<dis[it])
            {
                dis[it]=dis[node]+1;
                q.push(it);
            }
        }
    }
    return dis;
}
int main()
{ 
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i;
        for (auto x : adj[i])
            cout << " --> " << x;
        cout << "\n";
    }
    cout<<"the shortest distance: " << shortestDistance(adj,n);
}