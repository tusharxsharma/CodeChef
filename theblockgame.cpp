#include<iostream>
using namespace std; 
int main()
{
	int t ; 
	cin >> t; 
	while (t--)
	{
	int a ,rev,d, c = 0 ;
	cin >> a ;
	rev = a ;
	while (a>0)
		{
			d = a % 10 ; 
			c = (c*10)+d;
			a = a /10 ;
		}
		if (rev == c)
		{
			cout << "wins" << "\n";
		}
		else
		{
		 	cout << "losses" << "\n";
		}

	}
	return 0 ;		
}