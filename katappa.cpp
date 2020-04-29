#include<iostream>
using namespace std;
int main()
{
	int n,b=0,c=0; 
	cin >> n;
	{
		int a[n];
		for(int i =0;i<n;i++)
		{
		cin >> a[n];
		if(a[i]%2==0)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	if(b>c)
	{
		cout<<"READY FOR BATTLE"<<"\n";
	}
	else 	
	{
		cout << "NOT READY"<<"\n";
	}

	}
	return 0;                                	
}