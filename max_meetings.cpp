/*There is one meeting room in a firm. There are N meetings in the form of (Si, Fi) where Si is the start time of meeting i and Fi is 
finish time of meeting i. The task is to find the maximum number of meetings that can be accommodated in the meeting room. 
Print all meeting numbers*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(
int main()
{
	int n;
	cout<<"Enter the total no of meetings"<<endl;
	cin>>n;
	int s[n],f[n],resst[n],resf[n],mnum[n];
	cout<<"Enter the start times of the meetings"<<endl;
	for(int i=0;i<n;i++)
		cin>>s[i];
	cout<<"Enter the finish times of the meetings"<<endl;
	for(int i=0;i<n;i++)
		cin>>f[i];
	sort(f,s,n);
	resst[0]=s[0];
	resf[0]=f[0];
	int kf=0;
	int ks=0;
	mnum[0]=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]>resf[kf])
		{
			resst[++ks]=s[i];
			resf[++kf]=f[i];
			mnum[ks]=i+1;
		}
	}
	cout<<"Maximum no. of meetings : "<<ks+1<<endl;
	cout<<"Meeting numbers are : ";
	for(int i=0;i<=ks;i++)
		cout<<mnum[i]<<" ";
	cout<<"\n";
	for(int i=0;i<=ks;i++)
	{
		cout<<resst[i]<<","<<resf[i]<<endl;
	}
	return 0;
}
