/*
Given the total number of tasks and a list of prerequisite pairs, return the ordering of tasks you should pick to finish all tasks.
*/
#include <bits/stdc++.h> 
using namespace std;

int n,a[30][30],q[30],f=0,r=-1;
void lexotopo()
{
	vector<int>indeg(n,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
				indeg[j]++;
		}
			
	}
	
	for(int i=0;i<n;i++)
	{
		if(indeg[i]==0)
			q[++r]=i;
	}
	int c=0;
	
	while(f<=r)
	{
		int min=q[f++];
		
		
		for(int i=0;i<n;i++)
		{
			if(a[min][i]==1)
			{
				indeg[i]--;
				if(indeg[i]==0)
					q[++r]=i;
			}
			
		}
		c++;
	}
	if(c!=n)
	{
		cout<<-1<<endl;
		return;
	}
	for(int i=0;i<=r;i++)
		cout<<q[i]<<" ";
			
}

int main()
{
	int p,x,y;
	
	cout<<"Enter the no of tasks : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			a[i][j]=0;
	}
	cout<<"Enter the no. of pairs : ";
	cin>>p;
	cout<<"Enter the pairs : "<<endl;
	for(int i=0;i<p;i++)
	{
		cin>>x>>y;
		a[y][x]=1;
	}
	
	cout<<"The ordering of tasks are :"<<endl;
	lexotopo();
	return 0;
}
/*ouput
Enter the no of tasks : 7
Enter the no. of pairs : 8
Enter the pairs :
1 0
2 1
3 0
3 1
4 3
6 5
6 2
5 1
The ordering of tasks are :
0 1 2 3 5 4 6
*/