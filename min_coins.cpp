/*  Write a program for minimum coin changing problem using Greedy technique.*/
#include<iostream>
#include<vector>
using namespace std;
int den[]={1,2,3,5,10,20,50,100,200,500,1000,2000,5000};
int len = sizeof(den)/sizeof(den[0]);
vector<int>res;
void min_coins(int r)
{
  for (int i = len - 1; i >= 0; i--) {

        while (r >= den[i]) {
            r =r -den[i];
            res.push_back(den[i]);
        }
    }
}
int main(){
int n;
cout<<"Enter the value : "<<endl;
cin>>n;
min_coins(n);
cout<<"The minimum no. of coins required are : " << res.size()<<endl;
cout<<"The change from the available denominations are :"<<endl;

for (int i = 0; i < res.size(); i++)
        cout << res[i] << "  ";


return 0;
}
/*
output:
Enter the value :
98
The minimum no. of coins required are : 5
The change from the available denominations are :
50 20 20 5 3
*/
