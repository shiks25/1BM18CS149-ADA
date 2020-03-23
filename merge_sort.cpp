/*Sort a given set of N integer elements using Merge Sort technique and compute its time taken. Run the program for different values of N and
record the time taken to sort.*/
#include<vector>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int low,int mid,int high){
int i=low,
j=mid+1,
k=low;
int c[high];
while(i<=mid && j<=high){
if(a[i]<a[j]){
    c[k]=a[i];
    k++;
    i++;
}
else{
    c[k]=a[j];
    k++;
    j++;
}
}
while(i<=mid){
    c[k]=a[i];
    k++;
    i++;
}
while(j<=high){
    c[k]=a[j];
    k++;
    j++;
}
for(int i=low;i<=high;i++){
    a[i]=c[i];
}
}
void merge_sort(int low,int high,int a[]){

if(low<high){
        int mid=(low+high)/2;
    merge_sort(low,mid,a);
    merge_sort(mid+1,high,a);
    Merge(a,low,mid,high);
}
}
int main(){
    int n;
    clock_t start,End;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    start=clock();
    merge_sort(0,n-1,a);
    End = clock();
   cout <<"The sorted elements are\n";
    for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	double time_taken = double(End - start) / double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
	return 0;
}
/*output
Enter the size of the array
8
Enter the array elements:
3 6 2 1 9 8 4 0
The sorted elements are
0 1 2 3 4 6 8 9
Time taken by program is : 0.000004 sec
*/
