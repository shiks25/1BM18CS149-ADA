/*Sort a given set of N integer elements using Heap Sort technique and compute its time taken.*/
#include<bits/stdc++.h>
#include<time.h>
using namespace std;


void bottom_heap(int a[],int n){
for(int i=(n-1)/2;i>=0;i--){
    int p=i;
    int item=a[p];
    int c=2*p+1;
    while(c<n){
        if(c+1<n){
            if(a[c]<a[c+1]){
                c++;
            }
        }
         if(item<a[c]){
            a[p]=a[c];
            p=c;
            c=2*p+1;
        }
        else
        {
            break;
        }
        
    }
    a[p]=item;

}

}
void heap_sort(int a[],int n){
    
     bottom_heap(a,n);
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        bottom_heap(a,i);
    }
}
int main(){
   
    int n;
    clock_t start, end;
 cout<<"Enter the no. of elements : "<<endl;
 cin>>n;
 int arr[n];
 
 for(int j=0;j<n;j++){
     arr[j]=rand()%n;
 }
 start = clock(); 
 
 heap_sort(arr,n);
end = clock();
 cout<<"The array in sorted order is : "<<endl;
 for(int k=0;k<n;k++){
     cout<<arr[k]<<" ";
 }
 double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "\nTime taken by program is : " << fixed  
         << time_taken << setprecision(6); 
    cout << " sec " << endl; 

    return 0;
}
/*output
Enter the no. of elements :
10
The array in sorted order is :
0 1 2 4 4 4 7 8 8 9
Time taken by program is : 0.000004 sec
*/