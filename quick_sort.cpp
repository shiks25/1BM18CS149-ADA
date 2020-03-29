/*Sort a given set of N integer elements using Quick Sort technique and compute its time taken*/
#include<bits/stdc++.h>

using namespace std;
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    }
int pivot_pos(int ar[],int low,int high){
int x=ar[low];
int i=low,j=high+1;
while(i<j){
    do{
        i++;
    }while(ar[i]<=x);
    do{
        j--;
    }while(ar[j]>x);
    if(i<j){
        swap(&ar[i],&ar[j]);
    }
}
swap(&ar[low],&ar[j]);
return j;
      }
void quick_sort(int a[],int low,int high){
    int p;
    p=pivot_pos(a,low,high);
    if(low<high){
        quick_sort(a,low,p-1);
        quick_sort(a,p+1,high);
    }
}
int main(){
int n;
clock_t start,stop;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int ar[n];
cout<<"Enter the array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>ar[i];
}
start=clock();
quick_sort(ar,0,n-1);
stop=clock();
cout<<"The sorted array is: "<<endl;
for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}
double time_taken = double(stop - start) / double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is : " << fixed
         << time_taken << setprecision(8);
    cout << " sec " << endl;
return 0;
}
/*output
Enter the size of the array
12
Enter the array elements
4 7 23 2 8 1 0 -7 10 12 14 5
The sorted array is:
-7 0 1 2 4 5 7 8 10 12 14 23
Time taken by program is : 0.000003 sec
*/
