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
		
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		
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
/*output :

run1:
Enter number of elements in an array
5
Enter the array elements
the sorted elements are
846930886	1681692777	1714636915	1804289383	1957747793	
Time taken by program is : 0.000003 sec 

run2:
Enter number of elements in an array
10
Enter the array elements
the sorted elements are
424238335	596516649	719885386	846930886	1189641421	1649760492	1681692777	1714636915	1804289383	1957747793	
Time taken by program is : 0.000004 sec 
*/


