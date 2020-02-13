

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
		cout<<arr[i]<<",";
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

