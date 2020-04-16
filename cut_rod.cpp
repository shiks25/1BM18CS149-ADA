/*Given a rod of length ‘n’ inches and an array of prices that contains prices of all pieces of size smaller than ‘n’. Determine the maximum value obtainable by cutting up the rod and selling the pieces.*/
#include<iostream>
using namespace std;
int cut_rod(int profit[],int n)
{
   int val[n+1];
   val[0] = 0;
for (int i = 1; i<=n; i++)
   {
       int max_val = 0;
       for (int j = 0; j < i; j++)
         max_val = max(max_val, profit[j] + val[i-j-1]);
    val[i] = max_val;
   }
 return val[n];
}

int main(){
int len;
cout<<"Enter the length of the rod : "<<endl;
cin>>len;
cout<<"Enter the profits for each length :"<<endl;
int profit[len];
for(int i=0;i<len;i++){
    cin>>profit[i];
}
cout<<"The max profit obtained is : "<<cut_rod(profit,len);
return 0;
}
/*output
Enter the length of the rod :
5
Enter the profits for each length :
10 24 30 40 45
The max profit obtained is : 58
*/
