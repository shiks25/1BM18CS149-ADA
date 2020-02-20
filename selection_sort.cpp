/*Sort a given set of N integer elements using Selection Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void selectionsort(int arr[],int n)
{
	int temp,min,i,j;
	for(i=0;i<n-1;i++)
	{	min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(arr[i]!=arr[min]) //
		{
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		}
	}
}
int main()
{
	int n;
	clock_t start, end;
	cout<<"Enter number of elements in an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	start = clock(); 
	selectionsort(arr,n);
	end = clock(); 
   cout <<"the sorted elements are\n";
    for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "\nTime taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
	return 0;
		
}
