/*Write a program for the following: The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order.*/
#include<iostream>

using namespace std;
int lis(int arr[],int n){
    int seq[n];
      seq[0] = 1;
    for (int i = 1; i < n; i++ )
    {
        seq[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i] > arr[j] && seq[i] < seq[j] + 1)
                seq[i] = seq[j] + 1;
    }


    return seq[n-1];
}
int main(){
int n;
cout<<"Enter the no. of elements:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the elements :"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"The length of longest increasing sequence is : "<< lis(a,n)<<endl;

return 0;
}
/*output:
Enter the no. of elements:
9
Enter the elements :
50 22 9 33 21 50 41 60 80
The length of longest increasing sequence is : 5
*/
