/* Write a program for the partition problem. Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is same. */
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int n, int sum)
{

    if (sum == 0)
        return 1;
    else if (n == 0 )
        return 0;

    return partition(arr, n-1, sum)||partition (arr, n-1, sum-arr[n-1]);
}
int main(){
int sum = 0,n,arr[n];
cout<<"Enter the number of elements: "<<endl;
cin>>n;
cout<<"Enter the elements :"<<endl;
for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    sum += arr[i];
    }
    if(sum%2==0 && partition(arr,n,sum/2)){

            cout<<"Can be partitioned into two subsets of equal sum"<<endl;

    }
    else{
        cout<<"Cannot be partitioned into two subsets of equal sum"<<endl;
    }
return 0;
}
/*output
run1:
Enter the number of elements:
5
Enter the elements :
3 9 5 9 12
Cannot be partitioned into two subsets of equal sum

run2:
Enter the number of elements:
4
Enter the elements :
1 5 11 5
Can be partitioned into two subsets of equal sum
*/
