/*implement 0/1 Knapsack problem using dynamic programming.*/
#include<iostream>
using namespace std;
int maximum(int a,int b){
return (a>b)?a:b;
}
int knapsack(int n,int m,int p[],int w[]){
    int v[n+1][m+1];int x[n];
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        if(i==0 || j==0){
            v[i][j]=0;
        }
        else if(w[i-1]<=m){
            v[i][j]=maximum(v[i-1][j],v[i-1][j-w[i-1]]+p[i-1]);
        }
       else{
            v[i][j]=v[i-1][j];

       }


    }
}
for(int i=1;i<=n;i++){
    x[i]=0;
}
int i=n,j=m;
while(i!=0 && j!=0){
    if(v[i][j]!=v[i-1][j]){
        x[i]=1;
        j=j-w[i];
    }
    i--;
}
for(int i=1;i<=n;i++){
    if(x[i]==1){
        cout<<"item "<<i<<" is selected"<<endl;
    }
    else{
        cout<<"item "<<i<<" is not selected"<<endl;
    }
}
return v[n][m];
}
int main(){
int n,m;
cout<<"Enter the no. of items: \n";
cin>>n;
int p[n],w[n];
cout<<"Enter the capacity of the bag: \n";
cin>>m;

cout<<"Enter the weights of the items: \n";
for(int i=0;i<n;i++){
    cin>>w[i];
}
cout<<"Enter the profits of the items: \n";
for(int i=0;i<n;i++){
    cin>>p[i];
}
cout<<"The max profit is: "<<knapsack(n,m,p,w)<<endl;
return 0;

}
/*OUTPUT
Enter the no. of items:
4
Enter the capacity of the bag:
50
Enter the weights of the items:
10 20 30 40
Enter the profits of the items:
100 120 30 80
item 1 is selected
item 2 is selected
item 3 is not selected
item 4 is not selected
The max profit is: 220
*/
