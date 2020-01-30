#include<stdio.h>
void main()
 {
 int t,k,n,i,j,flag=0,mid;
 printf("Enter the no. of testcases\n");
 scanf("%d",&t);
for(i=0;i<t;i++)
 {
    printf("enter the numbers of elements and the key to be found\n");
    scanf("%d%d",&n,&k);
    int ar[n];
    printf("enter the elements\n");

    for(j=0;j<n;j++)
     {
        
        scanf("%d",&ar[j]);
      }
    int high=n-1,low=0;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(k==ar[mid])
       {
         flag=1;
         break;
       }
      else if(k<ar[mid])
       {
         high=mid-1;
        }
       else if(k>ar[mid])
       {
         low=mid+1;
       }
     }
 if(flag==1)
  {
      printf("1\n");
  }
  else{
   printf("-1\n");
  }
}
}

    

