/*Implement All Pair Shortest paths problem using Floyd’s algorithm.*/

#include <bits/stdc++.h>
//#define INF 1000
using namespace std;

int n,a[30][30];
void floyd(int a[][30]){
    for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
        }
    }
}
}
int main(){
    cout<<"Enter the no. of vertices:"<<endl;
    cin>>n;
    cout<<"Enter the adjacency matrix(for infinity enter 1000):"<<endl;
    for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
        cin>>a[i][j];
}
     }
    floyd(a);
    cout<<"The shortest path between every pair of vertices is:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(a[i][j]==1000){cout<<"inf ";}
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
/*output
Enter the no. of vertices:
4
Enter the adjacency matrix(for infinity enter 1000):
0 3 1000 7
8 0 2 1000
5 1000 0 1
2 1000 1000 0
The shortest path between every pair of vertices is:
0 3 5 6
5 0 2 3
3 6 0 1
2 5 7 0
*/
