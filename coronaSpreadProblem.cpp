#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,cnt=0,mx=0;
   cin>>m>>n;
   vector<vector<int>>arr(m,vector<int>(n)),vis(m,vector<int>(n)),dis(m,vector<int>(n));
   queue<pair<int,int>>q;
   const pair<int,int>dmat[]={{-1,0},{0,1},{1,0},{0,-1}};
   for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
   {cin>>arr[i][j];
   if(arr[i][j]==1)
   q.push({i,j});}
   while(!q.empty())
   {
      auto cell=q.front();
      q.pop();
      int x=cell.first,y=cell.second;
      if(vis[x][y])
      continue;
      vis[x][y]=1;
      cnt++;
      for(auto d:dmat)
      {
         int dx=d.first,dy=d.second;
         int adjx=x+dx;
         int adjy=y+dy;
         if(adjx>=0 && adjx<m && adjy>=0 && adjy<n && arr[adjx][adjy]==-1)
         {
            q.push({adjx,adjy});
            arr[adjx][adjy]=1;
            dis[adjx][adjy]=1+dis[x][y];
            mx=dis[adjx][adjy];
         }
      }
   }
   cout<<mx<<" "<<ct;
}