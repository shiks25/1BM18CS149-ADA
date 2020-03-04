void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
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
	insertionsort(arr,n);
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
