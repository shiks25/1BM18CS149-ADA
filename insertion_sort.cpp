//Sort a given set of N integer elements using Insertion Sort technique and compute its time taken.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
         while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
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
	insertionSort(arr,n);
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
/*output:(using rand function)
1)
131176229       1189641421      1303455736      1315634022      1350490027                                                   
1365180540       1369133069      1540383426      1649760492      1653377373                                                   
1656478042       1681692777      1714636915      1726956429      1734575198                                                   
1801979802       1804289383      1914544919      1957747793      1967513926                                                   
973594324       2038664370      2044897763      2089018456      2145174067                                                    
Time taken by program is : 0.000008 sec  
2)
1734575198       1749698586      1780695788      1801979802      1804289383                                                   
1827336327       1843993368      1889947178      1911759956      1914544919                                                   
1918502651       1937477084      1956297539      1957747793      1967513926                                                   
2973594324       1984210012      1998898814      2001100545      2038664370                                                   
044897763       2053999932      2084420925      2089018456      2145174067                                                    
Time taken by program is : 0.000015 sec   */
