/*Given an undirected graph and a number m, determine if the graph can be colored with at most m colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices.*/
#include<iostream>
using namespace std;
int g[30][30];
bool yes(int v, int g[][30], int color[], int c,int n)
{
    for (int i = 0; i < n; i++)
        if (g[v][i] && c == color[i])
            return false;
    return true;
}

bool graphColor(int g[][30], int m, int color[], int v,int n)
{
    if (v == n)
        return true;
    for (int c = 1; c <= m; c++)
    {

        if (yes(v, g, color, c,n))
        {
           color[v] = c;
             if (graphColor(g, m, color, v+1,n) == true)
                        return true;
        color[v] = 0;
        }
    }

    return false;
}

int main()
    {
        int m, n;

        cout << "Enter the no. of vertices :" << endl;
        cin >> n;

        cout << "Enter the values :" << endl;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>g[i][j];
        cout << "Enter the no. of colors :" << endl;
        cin >> m;
         int color[m];

bool f=graphColor(g, m, color, 0,n) ;
if(f){
    cout<< "Following are the assigned colors :"<<endl;
    for (int i = 0; i < n; i++)
      cout<< color[i]<<" ";
}
else{
    cout<<"Solution does not exist "<<endl;
}
 return 0;
    }
/*output
Enter the no. of vertices :
4
Enter the values :
0 1 1 1
1 0 1 0
1 1 0 1
1 0 1 0
Enter the no. of colors :
3
Following are the assigned colors :
1 2 3 2
*/
