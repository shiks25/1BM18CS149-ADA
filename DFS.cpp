#include<iostream>
using namespace std;
int a[30][30],reach[30],n;
void dfs(int v){
     int i;
     reach[v]=1;
     for(i=1;i<=n;i++)
         if(a[v][i]&&!reach[i]){
            cout<<v<<" -> "<<i<<endl;
            dfs(i);
            }
 }
 int main(){
    int i,j,count=0;
    cout<<"Enter no of vertices:"<<endl;
   cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
        reach[i]=0;
        a[i][j]=0;
        }
   cout<<"Enter adjacency matrix"<<endl;
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
        cin>>a[i][j];
   cout<<"connectivity of the graph are \n";
    dfs(1);
    for(i=1;i<=n;i++)
       if(reach[i])
         count++;
    if(count==n)
       cout<<"Graph is connected.\n";
    else
      cout<<"Graph is disconnected.\n";
   
    return 0;
  }
/*output:
Enter no of vertices:                                                                                                         
6                                                                                                                             
Enter adjacency matrix                                                                                                        
0 1 1 1 0 0                                                                                                                   
1 0 0 0 0 0                                                                                                                   
1 0 0 1 1 0   
1 0 1 0 0 0                                                                                                                   
0 0 1 0 0 0                                                                                                                   
0 0 0 0 0 0    
connectivity of the graph are 
1 -> 2                                                                                                                        
1 -> 3  
1 -> 4
3 -> 4 
3 -> 5                                                                                                                        
Graph is disconnected    
*/
