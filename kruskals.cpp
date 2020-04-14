/* Find Minimum Cost Spanning Tree of a given undirected graph using Kruskals algorithm.*/
#include<iostream>

using namespace std;
int parent[50];int a[30][30],min_cost=0;

int find(int v)
{
	while (parent[v]!=v)
	        v = parent[v];
	return v;
}
void unionv(int i, int j)
{
	int a = find(i);
	int b = find(j);
   	parent[a] = b;
}
void kruskal(int a[][30],int n){
for(int i=0;i<n;i++)
        	parent[i] = i;
int count=0;
    while(count<n-1){
            int min=1000;
            int indi=-1,indj=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && find(i)!=find(j) && a[i][j]<min){
                min=a[i][j];
                indi=i;
                indj=j;

                }
            }
    }
    unionv(indi,indj);
    cout<<indi<<" -> "<<indj<<endl;
    count++;
    min_cost+=min;
    }

}
int main(){
int n;
cout<<"Enter the no. of vertices : "<<endl;
cin>>n;

cout<<"Enter the weights of each edge in the graph :(if no edge enter 9999) "<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
  cin >>a[i][j];
}
}
cout<<"Edges in MST are:"<<endl;
kruskal(a,n);
cout<<"The min cost for the spanning tree is :"<<min_cost<<endl;

return 0;
}
/*
output
Enter the weights of each edge in the graph :(if no edge enter 9999)
0 9999 9999 9999 4 4
9999 0 3 9999 3 9999
9999 3 0 3 4 9999
99 99 3 0 2 99
4 3 4 2 0 2
4 9999 9999 9999 2 0
Edges in MST are:
3 -> 4
4 -> 5
1 -> 2
1 -> 4
0 -> 4
The min cost for the spanning tree is :14
*/
