#include<iostream>
using namespace std;
int main ()
{
	int t ;
	cin >> t; 
	while (t--)
	{
		int a , c= 0 , d , rev =0 ,e, f = 0,g,h,b,sum ;
		cin >> a ;
		g = a ,h=a ;	
			 
			b = h % 10 ;
			c = c + b ;
		
		while (g > 0)
		{
			d = g % 10 ; 
			rev = (rev*10) + d ;
			g = g / 10 ;
		}

			e = rev % 10 ;
			f = f + e;
			sum = c + f ;
			cout << sum << "\n";
		} 
		
		return 0 ;	
	}
	