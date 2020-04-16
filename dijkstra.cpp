/*From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra’s algorithm.*/
#include<iostream>
using namespace std;
int a[30][30],source,d[30],p[30];
void alg(int a[][30],int n){
    int s[n];
for(int i=0;i<n;i++){
    d[i]=a[source][i];
    p[i]=source;
    s[i]=0;
}
s[source]=1;
for(int c=0;c<n;c++){
        int min=999,u;
    for(int j=0;j<n;j++){
        if(d[j]<min && s[j]!=1){
            min=d[j];
            u=j;
        }
    }
    s[u]=1;
    for(int i=0;i<n;i++){
        if(min+a[u][i]<d[i]){
            d[i]=min+a[u][i];
            p[i]=u;
        }
    }
}

}
int main(){
int n;
cout<<"Enter the no. of vertices :"<<endl;
cin>>n;
cout<<"Enter the adjacency matrix(Enter 9999 for infinity):"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
cout<<"Enter the source vertex :"<<endl;
cin >>source;
cout<<"The shortest paths from vertex ' "<<source<<" ' are :"<<endl;
alg(a,n);
for(int i=0;i<n;i++){
int k=i;
 while(k!=source) {

    cout <<k<<" <- ";
k=p[k];
 }
 cout <<source<<"  =  ";
 cout<<d[i]<<endl;

}
return 0;
}
/*output:
Enter the no. of vertices :
5
Enter the adjacency matrix(Enter 9999 for infinity):
0 10 9999 9999 5
9999 0 1 9999 2
9999 9999 0 4 9999
7 9999 6 0 9999
9999 3 9 2 0
Enter the source vertex :
0
The shortest paths from vertex ' 0 ' are :
0  =  0
1 <- 4 <- 0  =  8
2 <- 1 <- 4 <- 0  =  9
3 <- 4 <- 0  =  7
4 <- 0  =  5
*/
