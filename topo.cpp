//Write program to obtain the Topological ordering of vertices in a given digraph.
#include<bits/stdc++.h>
using namespace std;
int top=-1,visit[20],n,adj[20][20],topo[20];

void dfs(int v)
{
  int w;
  visit[v]=1;
  for(w=1;w<=n;w++)
    if((adj[v][w]==1) && (visit[w]==0))
      dfs(w);
  topo[++top]=v;
}

int main()
{
  int v,w;
  cout<<"Enter the number of vertices:\n";
  cin>>n;
  cout<<"Enter the adjacency matrix:\n";
  for(v=1;v<=n;v++)
    for(w=1;w<=n;w++)
            cin>>adj[v][w];
  for(v=1;v<=n;v++)
      visit[v]=0;
  
  for(v=1;v<=n;v++)
  {
   if(visit[v]==0)
      dfs(v);
  }
  cout<<"Topological sorting is:";
  cout<<topo[top]<<" ";
  while(top--)
     cout<<topo[top]<<" ";
     
   
   return 0;
}
/*output
Enter the number of vertices:                                                                                                 
5                                                                                                                             
Enter the adjacency matrix:                                                                                                   
0 0 0 0 0                                                                                                                     
0 0 0 0 0                                                                                                                     
1 0 0 1 0   
0 1 0 0 0                                                                                                                     
1 1 0 0 0                                                                                                                     
Topological sorting is:5 3 4 2 1 
*/
