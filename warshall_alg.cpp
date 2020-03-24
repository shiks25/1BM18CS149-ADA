/*Implement Warshall’s algorithm using dynamic programming.*/

#include<bits/stdc++.h>
using namespace std;
int n,ar[10][10];
void warshall(int ar[][10])
{

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ar[i][j]!=1 && (ar[i][k]==1 && ar[k][j]==1)){
                    ar[i][j]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    cout<<"Enter the no. of vertices:"<<endl;
    cin>>n;

    cout<<"Enter the adjacency matrix:"<<endl;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ar[i][j];
            }

    }
    cout<<"The transitive closure is:"<<endl;
    warshall(ar);
	return 0;
}
/*output
Enter the no. of vertices:
4
Enter the adjacency matrix:
0 1 0 0
0 0 0 1
0 0 0 0
1 0 1 0
The transitive closure is:
1 1 1 1
1 1 1 1
0 0 0 0
1 1 1 1
*/
