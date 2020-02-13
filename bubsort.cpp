

#include <bits/stdc++.h> 
using namespace std;
void bubblesort(int arr[],int n)
{	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
}

int main()
{	int n,ch;
	clock_t start, end; ;
	cout<<"Enter number of elements in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	start = clock(); 
 	bubblesort(arr,n);
 	end = clock(); 
 		
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by this program is : " << fixed  
         << time_taken << setprecision(6); 
    cout << " sec " << endl; 
   
	return 0;
}
/*
OUTPUT:
run1:
Enter number of elements in the array
4
Enter the elements
30 -50 7 9
-50 7 9 30 Time taken by this program is : 0.000016 sec 
run2:
Enter number of elements in the array
10
Enter the elements
23 -9 -90 35 6 2 0 3 1 8
-90 -9 0 1  2 3 6 8 23  35 Time taken by this program is : 0.000017 sec 
*/


