/*Given a sorted array with repeating integers. You need to find the first occurrence , last occurrence and count of a given key in the array. USE ONLY BINARY SEARCH. */

#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 
int first(int arr[], int low, int high, int x, int n) 
{ 
    if(high >= low) 
    { 
        
        int mid = (low + high)/2;
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1; 
} 
	int main() 
{ 
    	int  fe , i, n, key; 
	cout << "Enter the no. of elements \n";
	
    	cin >> n; 
    	int ar[n];
	cout << "Enter the elements in sorted order:";
	for(int j=0;j<n;j++)
		cin >> ar[j];
		cout << "enter the key to be searched:";
		cin >> key;
    	fe =  first(ar, 0, n-1, key, n);
    	
    	if(fe == -1){
      		cout<<"first occurance=-1,last occurance=-1,count=0\n";
    	}	
    	else{
      		cout<<"First Occurrence at index = "<< fe;
      		i=fe;
	      	while(ar[i]<=key)
	      	{
			i++; 
	      	}
	      	cout<<"\t"<<"Last Occurrence at index = "<< i-1;
	      	cout<<"\t"<<"Count = "<<(i - fe)<<"\n"; 
    	}
    return 0; 
} 

