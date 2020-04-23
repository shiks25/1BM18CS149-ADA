/*Implement “Sum of Subsets” using Backtracking. “Sum of Subsets” problem: Find a subset of a given set S = {s1,s2,……,sn} of n positive integers whose sum is equal
to a given positive integer d.*/
#include<iostream>
    using namespace std;
bool f=false;
void display_Sub(int subSet[], int size) {
   for(int i = 0; i < size; i++) {
      cout << subSet[i] << "  ";
   }
   cout << endl;
}
void subset_sum(int set[], int subSet[], int n, int subSize, int total, int pos,int sum,bool f) {
   if( total == sum) {
      display_Sub(subSet, subSize);//print the subset
      f=true;
      subset_sum(set,subSet,n,subSize-1,total-set[pos],pos+1,sum,f); //for other subsets
      return;
   }
   else {
      for( int i = pos; i < n; i++ ) {   //find node along breadth
         subSet[subSize] = set[i];
         subset_sum(set,subSet,n,subSize+1,total+set[i],i+1,sum,f); //do for next node in depth
      }
   }
}

int main()
    {
        int i, n, sum;

        cout << "Enter the number of elements in the set :" << endl;
        cin >> n;
        int a[n];
        cout << "Enter the values :" << endl;
        for(i=0;i<n;i++)
          cin>>a[i];
        cout << "Enter the value of sum :" << endl;
        cin >> sum;
         int *subSet = new int[n];

if(!f){
        cout<<"No subsets found "<<endl;
    }
cout<<"The subsets containing the sum are :"<<endl;
subset_sum(a, subSet, n, 0, 0, 0, sum,f);
delete[] subSet;
 return 0;
    }
/*output
Enter the number of elements in the set :
6
Enter the values :
1 5 9 6 3 4
Enter the value of sum :
4
The subsets containing the sum are :
1 3
4
*/
