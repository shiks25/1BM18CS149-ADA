/*Given an array of 0s and 1s, If any particular index i has value 1 then it is a safe index and if the value is 0 then it
is an unsafe index. A man is standing at index -1(source) can only land on a safe index and he has to reach the Nth index (last position).
At each jump, the man can only travel a distance equal to any Fibonacci Number. You have to minimize the number of steps, provided man can
 jump only in forward direction.*/

#include <bits/stdc++.h>
using namespace std;
#define m 1e5

int min_jumps(int a[], int n)
{   int fib[20];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 20; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    int D[n + 2];
    D[0] = 0;
    for (int i = 1; i <= n + 1; i++)
        D[i] = m;

    for (int i = 1; i <= n + 1; i++) {

        for (int j = 1; j < 20; j++) {

            if ((a[i - 1] == 1 || i == n + 1) && i - fib[j] >= 0)
                D[i] = min(D[i],1 + D[i - fib[j]]);
        }
    }
    if (D[n + 1] != m)
        return D[n + 1];
    else
        return -1;
}
int main(){
int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
int ar[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){

                cin>>ar[i];
}
    cout<<"The minimum no. of fibonacci jumps are: "<<min_jumps(ar,n)<<endl;

	return 0;
}
/*output
Enter the size of the array:
10
Enter the array elements:
0 0 1 1 0 1 0 0 1 0
The minimum no. of fibonacci jumps are: 2
*/
