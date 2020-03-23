/*There are 2 sorted arrays A and B of size n each. Write an algorithm to find the median of the array obtained after merging the above 2 arrays
(i.e. array of length 2n). The complexity should be O(log(n)).*/

#include<bits/stdc++.h>
using namespace std;

int median(int ar[],int n)
{
    if (n % 2 == 0)
        return (ar[n / 2] +
                ar[(n / 2 )- 1]) / 2;
    else
        return ar[n / 2];
}
int merge_median(int a1[],int a2[], int n)
{
    if (n <= 0)
        return -1;
    if (n == 1)
        return (a1[0] + a2[0]) / 2;
    if (n == 2)
        return (max(a1[0], a2[0]) +  min(a1[1], a2[1])) / 2;

    int m1 = median(a1, n);
    int m2 = median(a2, n);

    if (m1 == m2)
        return m1;

    if (m1 < m2)
    {
        if (n % 2 == 0)
            return merge_median(a1 + (n / 2) - 1, a2, n - (n / 2) + 1);
        return merge_median(a1 + n / 2, a2, n - (n / 2));
    }

    if (n % 2 == 0)
        return merge_median(a2 + (n / 2 )- 1, a1, n - (n / 2) + 1);
    return merge_median(a2 + n / 2,a1, n - (n / 2));
}
int main(){
    int n;
    cout<<"Enter the size of the arrays"<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the first array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the second array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"median after merging is: "<<merge_median(a,b,n)<<endl;

	return 0;
}
/*output
Enter the size of the arrays
4
Enter the first array elements:
3 6 9 10
Enter the second array elements:
2 5 6 11
median after merging is: 6
*/
