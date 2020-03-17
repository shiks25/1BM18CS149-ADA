/*Given two text strings A of length n and B of length m,to transform A into B using a minimum number of operations of the
following types: delete a character from A, insert a character into A,or change some character in A into a new character.*/
#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
    return min(min(x, y), z);
}

int editDist(string str1, string str2, int m, int n)
{
    // If first string is empty;
    if (m == 0)
        return n;
  // If second string is empty;
    if (n == 0)
        return m;
  // If last characters of two strings are same;
    if (str1[m - 1] == str2[n - 1])
        return editDist(str1, str2, m - 1, n - 1);

    return 1 + min(editDist(str1, str2, m, n - 1), // Insert
                   editDist(str1, str2, m - 1, n), // Remove
                   editDist(str1, str2, m - 1, n - 1) // Replace
                   );
}

int main()
{
    string str1,str2;
    int m,n;
    cout<< "Enter the first string and its length"<<endl;
    cin>>str1>>m;
    cout<<"Enter the second string and its length"<<endl;
    cin>>str2>>n;
    cout << "The minimum number of operations required is: "<<editDist(str1, str2, m,n);
    return 0;
}
/*output
Enter the first string and its length
monday 6
Enter the second string and its length
thursday 8
The minimum number of operations required is: 5
*/

