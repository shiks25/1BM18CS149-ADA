/*Write a recursive program to:
1)Solve Towers-of-Hanoi problem
2)Find GCD
*/


#include<iostream>
using namespace std;
void tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		cout<< "move "<< n << " disc from " << src << " to "<< dest<<"\n";
	}
	else
	{
		tower(n-1,src,dest,temp);
		cout<< "move "<<n<<" disc from "<<src<<" to "<< dest<<"\n";
		tower(n-1,temp,src,dest);
	}
}
int gcd(int a, int b) {
if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{   
    int choice,num;
    int a , b;
    cout <<" Enter 1 to solve the tower of hanoi problem and 2 to find gcd of 2 nos \n";
    cin >> choice;
    switch(choice)
    {
      
	
	case 1:
	       cout<< "enter the number of discs"<<"\n";
	       cin>> num;
	       tower(num,'A','B','C');
	       break;
	case 2:
            cout<<"Enter the values of a and b: "<<endl;
            cin>>a>>b;
            cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
            break;
    default: cout << "invalid choice\n";
    }
    return 0;
           
	       
}

