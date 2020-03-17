/*Given two text strings A of length n and B of length m,to transform A into B using a minimum number of operations of the
following types: delete a character from A, insert a character into A,or change some character in A into a new character.*/
#include <bits/stdc++.h>
using namespace std;
int min_op(int x, int y, int z)
{
    return min(min(x, y), z);
}

int Dist(string a, string b , int m, int n)
{
    // If first string is empty;
    if (m == 0)
        return n;
  // If second string is empty;
    if (n == 0)
        return m;
  // If last characters of two strings are same;
    if (a[m - 1] == b[n - 1])
        return Dist(a, b, m - 1, n - 1);

    return 1 + min_op(Dist(a, b, m, n - 1), // Insert
                      Dist(a, b, m - 1, n), // Remove
                      Dist(a, b, m - 1, n - 1) // Replace
                   );
}

int main()
{
    string str1,str2;
    cout<< "Enter the first string "<<endl;
    cin>>str1;
    cout<<"Enter the second string "<<endl;
    cin>>str2;
    cout << "The minimum number of operations required is: "<<Dist(str1, str2, str1.length(),str2.length());
    return 0;
}
/*output
Enter the first string 
monday 
Enter the second string 
thursday 
The minimum number of operations required is: 5
*/

