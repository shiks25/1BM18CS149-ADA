//Write program to print all the nodes reachable from a given starting node in a digraph using BFS method.
#include<bits/stdc++.h>
using namespace std;
int a[30][30],q[30],visited[30],r=-1,f=0,i,j,n; 
void bfs(int v){ 
         for(i=1;i<=n;i++) 
                if(a[v][i] && !visited[i]) 
                    q[++r]=i; 
                if(f<=r){ 
                 visited[q[f]]=1; 
                 bfs(q[f++]); 
                 }  
         }
int main(){ 
    int v; 
       cout<<"Enter no. of vertices"<<endl; 
       cin>>n;
       for(i=1;i<=n;i++) 
        { 
         q[i]=0; 
         visited[i]=0; 
        } 
       cout<<"Enter Adjacency Matrix of the graph"<<endl; 
         for(i=1;i<=n;i++){ 
            for(j=1;j<=n;j++){ 
              
              cin>>a[i][j]; 
              } 
            } 
         cout<<"Enter the node of ur Choice"<<endl; 
         cin>>v;
         bfs(v); 
        cout<<"All the nodes reachable from node "<<v<<" to "<<n<<" are"<<endl;
         for(i=1;i<=n;i++){ 
             if(visited[i]) 
                cout<<i<<"\t"; 
                } 
        
         return(0); 
    } 
    /*output:
Enter no. of vertices
5
Enter Adjacency Matrix of the graph                                                                                           
0 1 1 1 0                                                                                                                     
0 0 0 0 0                                                                                                                     
0 0 0 1 1                                                                                                                     
0 0 0 0 0                                                                                                                     
0 0 0 0 0                                                                                                                       
Enter the node of ur Choice                                                                                                   
3                                                                                                                             
All the nodes reachable from node 3 to 5 are                                                                                     
4 5               
*/    
    
