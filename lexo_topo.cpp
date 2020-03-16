/*Given a directed graph with N vertices and M edges that may contain cycles, the task is to find the lexicographically
smallest topological ordering of the graph if it exists otherwise print -1 (if the graph has cycles).*/
#include<bits/stdc++.h>
using namespace std;

int n,a[30][30],q[30],f=0,r=-1;
void lexotopo()
{
	vector<int> in_deg(n,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
				in_deg[j]++;
		}

	}

	for(int i=0;i<n;i++)
	{
		if(in_deg[i]==0)
			q[++r]=i;
	}
	int c=0;
	vector<int> toporder;
	while(f<=r)
	{
		int min=q[f++];

		toporder.push_back(min);
		for(int i=0;i<n;i++)
		{
			if(a[min][i]==1)
			{
				in_deg[i]--;
				if(in_deg[i]==0)
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
	for(int i=0;i<toporder.size();i++)
		cout<<toporder[i]<<" ";

}

int main()
{
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<"lexicographically smallest topological ordering is"<<endl;
	lexotopo();
	return 0;
}
/*output
Enter the no of vertices                                                                                                      
6                                                                                                                             
Enter the adjacency matrix                                                                                                    
0 0 0 1 0 0                                                                                                                   
0 0 0 1 0 1                                                                                                                   
0 0 0 0 0 1   
0 0 0 0 1 0                                                                                                                   
0 0 0 0 0 0                                                                                                                   
0 0 0 0 1 0                                                                                                                   
lexicographically smallest topological ordering is 
0 1 2 3 5 4 
*/
