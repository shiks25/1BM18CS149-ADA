#include <bits/stdc++.h>
#include<vector>
using namespace std;
int n,a[30][30];
bool dfs_cycle(int v){
    vector<int>vis;
    int reach[n];
    vis.push_back(v);
    reach[v]=1;
    for(int i=0;i<n;i++){
        if(a[v][i] && !reach[i]){
            
            dfs_cycle(i);
        }
            if(a[v][i] && find(vis.begin(),vis.end(),i)!=vis.end()){
                
                return true;
            }
        }
    
    vis.pop_back();
    return false;
}
int main()
{
    cout<<"enter v\n";
    cin>>n;
    cout<<"enter adj\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    if(dfs_cycle(0))
        cout<<"cycle!";
    else{
        cout<<"good job!";
    }
    return 0;
}
