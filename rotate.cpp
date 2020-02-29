/* An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time. */

#include<iostream>
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
int findPivot(int arr[], int low, int high) 
{ 
  	if (high < low) return -1; 
  	if (high == low) return low; 
  
   	int mid = (low + high)/2; 
   	if (mid < high && arr[mid] > arr[mid + 1]) 
    		return mid; 
      
   	if (mid > low && arr[mid] < arr[mid - 1]) 
    		return (mid-1); 
      
   	if (arr[low] >= arr[mid]) 
    		return findPivot(arr, low, mid-1); 
      
   	return findPivot(arr, mid + 1, high); 
} 

int pivotedBinary(int arr[], int n, int key) 
{ 
  	int pivot = findPivot(arr, 0, n-1); 
 
  	if (pivot == -1) 
    		return binary(arr, 0, n-1, key); 
 
  	if (arr[pivot] == key) 
    		return pivot; 
      
  	if (arr[0] <= key) 
    		return binary(arr, 0, pivot-1, key); 
      
    	return binary(arr, pivot+1, n-1, key); 
} 

int main()
{
	int key,n;
	cout<<"Enter the array size and key"<<endl;
	cin>>n>>key;
	int arr[n];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<pivotedBinary(arr,n,key)<<endl;
	
	return 0;
}
