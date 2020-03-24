/*3-way merge sort*/

#include <bits/stdc++.h>
using namespace std;
void Merge(int a[], int low, int mid1,int mid2, int high, int dest[])
{
    int i = low, j = mid1, k = mid2, l = low;

    while ((i < mid1) && (j < mid2) && (k < high))
    {
        if(a[i] < a[j])
        {
            if(a[i] < a[k])
            {
                dest[l++] = a[i++];
            }
            else
            {
                dest[l++] = a[k++];
            }
        }
        else
        {
            if(a[j] < a[k])
            {
                dest[l++] = a[j++];
            }
            else
            {
                dest[l++] = a[k++];
            }
        }
    }

    while ((i < mid1) && (j < mid2))
    {
        if(a[i] < a[j])
        {
            dest[l++] = a[i++];
        }
        else
        {
            dest[l++] = a[j++];
        }
    }

    while ((j < mid2) && (k < high))
    {
        if(a[j] < a[k])
        {
            dest[l++] = a[j++];
        }
        else
        {
            dest[l++] = a[k++];
        }
    }

    while ((i < mid1) && (k < high))
    {
        if(a[i] < a[k])
        {
            dest[l++] = a[i++];
        }
        else
        {
            dest[l++] = a[k++];
        }
    }

    while (i < mid1)
        dest[l++] = a[i++];

    while (j < mid2)
        dest[l++] = a[j++];

    while (k < high)
        dest[l++] = a[k++];
}


void merge_sort(int a[], int low,int high, int dest[])
{
    if (high - low < 2)
        return;

    int mid1 = low + ((high - low) / 3);
    int mid2 = low + 2 * ((high - low) / 3) + 1;

    merge_sort(dest,low, mid1, a);
    merge_sort(dest, mid1, mid2,a);
    merge_sort(dest, mid2, high,a);

    Merge(dest, low, mid1, mid2, high, a);
}

void Merge3Way(int a[], int n)
{
    if (n == 0)
        return;

    int dup[n];

    for (int i = 0; i < n; i++)
        dup[i] = a[i];

    merge_sort(dup, 0, n, a);

    for (int i = 0; i < n; i++)
        a[i] = dup[i];
}
int main(){
int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){

                cin>>arr[i];
}
Merge3Way(arr,n);
cout<<"The 3-way sorted array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

	return 0;
}
/*output
Enter the size of the array:
10
Enter the array elements:
34 78 49 23 -95 6 58 -108 84 0
The 3-way sorted array is:
-108 -95 0 6 23 34 49 58 78 84
*/
