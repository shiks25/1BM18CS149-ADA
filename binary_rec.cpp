*Implement Recursive Binary search and Linear search and determine the time required to search an element. Repeat the experiment for different values of N and plot a graph of the time taken versus N.*/
#include<iostream>

#include<chrono>
using namespace std::chrono;
using namespace std;
int binary(int a[], int f, int l, int key)
{
	int mid=(f+l)/2;
	if(f>l)
		return -1;
	else if(a[mid]==key)
		return 1;
	else if(key>a[mid])
		return binary(a,mid+1,l,key);
	else
		return binary(a,f,mid-1,key);
}


int main()
{
	int key,n,ch;
	cout<<"Enter the array size and key"<<endl;
	cin>>n>>key;
	int arr[n];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	auto start = high_resolution_clock::now(); 
        
	
		cout<<binary(arr,0,n,key)<<endl;
		auto stop = high_resolution_clock::now(); 
		auto duration = duration_cast<microseconds>(stop - start); 
		cout << "Time taken : "<< duration.count() << " microseconds" << endl;
               
       
	return 0;
}
