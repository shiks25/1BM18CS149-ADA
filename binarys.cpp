#include<iostream>
using namespace std;
int main()
 {
 int t,k,n,flag=0,mid;
 cout << "Enter the no. of testcases";
 cin >> t;
for(int i=0;i<t;i++)
 {
    cout << "enter the numbers of elements and the key to be found";
    cin >> n >> k;
    int ar[n];
    cout << "enter the elements";

    for(int j=0;j<n;j++)
     {
        
        cin >> ar[j];
      }
    int high=n-1,low=0;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(k==ar[mid])
       {
         flag=1;
         break;
       }
      else if(k<ar[mid])
       {
         high=mid-1;
        }
       else if(k>ar[mid])
       {
         low=mid+1;
       }
     }
 if(flag==1)
  {
      cout << "1";
  }
  else{
   cout << "-1";
  }
}
  return 0;
}

