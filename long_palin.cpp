/*Given a sequence, find the length of the longest palindromic subsequence in it.*/
#include<iostream>
#include<string.h>
using namespace std;
int max (int x, int y) { return (x > y)? x : y; }
int lpalin(string str)
{
   int n = str.length();

   int t[n][n];
for (int x = 0; x< n; x++)
      t[x][x] = 1;

for (int p=2; p<=n; p++)
    {
        for (int i=0; i<n-p+1; i++)
        {
           int j = i+p-1;
            if(str[i]==str[j] && p==2){
                t[i][j]=2;
            }
             else if (str[i] == str[j]){
                t[i][j] = t[i+1][j-1] + 2;
             }
               else{
               t[i][j] = max(t[i][j-1], t[i+1][j]);
               }
        }
    }

    return t[0][n-1];
}


int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"The length of the longest palindromic subsequence is: "<<lpalin(s)<<endl;
return 0;
}
/*output
Enter the string:
BBABCBCAB
The length of the longest palindromic subsequence is: 7
*/

