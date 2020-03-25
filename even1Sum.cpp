/*Given an array arr[] of size N. The task is to find the sum of the digits of all array
elements which contains even number of 1’s in their binary representation*/

#include <bits/stdc++.h>
using namespace std;
int evencount(int n)
{
    int e = 0;
    while (n) {
        n = n & (n - 1);
        e++;
    }
    if (e % 2 == 0)
        return 1;
    else
        return 0;
}

int sum(int n)
{
    int s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}
int main(){
    int n,tsum=0;
    cout<<"Enter the no.of elements:"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(evencount(ar[i])==1){
            tsum+=sum(ar[i]);
        }
    }
    cout<<"The sum of digits is: "<<tsum<<endl;

	return 0;
}
/*output
Enter the no.of elements:
5
Enter the elements:
4 15 6 8 2
The sum of digits is: 12
*/
