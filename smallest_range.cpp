/*Given k sorted lists of integers of size n each, find the smallest range that includes at least element from each of the k lists. If more than one smallest ranges are found, print any one of them.*/
#include <bits/stdc++.h> 
using namespace std; 
int arr[20][20];
int ptr[501]; 

void findSmallestRange(int arr[][20], int n, int k) 
{ 
	int i, minval, maxval, minrange, minel, maxel, flag, minind; 

	for (i = 0; i <= k; i++) 
		ptr[i] = 0; 

	minrange = 9999; 

	while (1) { 
		minind = -1; 
		minval = 9999; 
		maxval = -9999; 
		flag = 0; 

		for (i = 0; i < k; i++) { 
			if (ptr[i] == n) { 
				flag = 1; 
				break; 
			} 
			if (ptr[i] < n && arr[i][ptr[i]] < minval) { 
				minind = i; 
				minval = arr[i][ptr[i]]; 
			} 
			if (ptr[i] < n && arr[i][ptr[i]] > maxval) { 
				maxval = arr[i][ptr[i]]; 
			} 
		} 

		if (flag) 
			break; 

		ptr[minind]++; 

		if ((maxval - minval) < minrange) { 
			minel = minval; 
			maxel = maxval; 
			minrange = maxel - minel; 
		} 
	} 

	cout << "The smallest range is [" << minel << " " << maxel << "]"; 
} 

int main() 
{ 
	int k,n;
	cout<<"Enter the no. of lists: ";
	cin>>k;
  	cout<<"Enter the size of each list: ";
	cin>>n;
	cout<<"Enter the elements of the k lists : "<<endl;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}

  
    	findSmallestRange(arr, n, k); 
  
    return 0; 
} 

/* output
Enter the no. of lists: 3
Enter the size of each list: 5          
Enter the elements of the k lists
4 7 9 12 15
0 8 10 14 20
6 12 16 30 50
The smallest range is [6 8]
*/







