#include<iostream>
using namespace std; 
int main()
{
	long long int a=2187483647;
	for(int i=0;i<a;i++)
	{
	int b;
	cin >> b ;
	if(b==42)
	{
	break;
	}
	else
	{
	cout << b << "\n";	
	}
	}
	return 0;
}
