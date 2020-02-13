/*Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. It is given that all array elements are distinct.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n,int k)
{	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}

int main() {
int n,k;
 cout<<"Enter number of elements in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
		cin >> arr[i];
		
	cout <<"Enter the value of k\n";
	cin >> k;
		bubblesort(arr,n,k);
		return 0;
		}
		
	
 
