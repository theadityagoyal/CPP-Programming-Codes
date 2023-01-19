#include<iostream>
using namespace std;

void fiboonaci_series(int num)
{
	int a = 0 ;
	int b = 1 ;
	int fib;
	
//	printing 0 and 1
	cout<<a<<" "<<b<<" ";
	
//	for next terms
	for(int i = 2; i<num; i++)
	{
		fib = a + b;
		a = b;
		b = fib;	
	}
	cout<<fib<<" ";		
	
	
}
int main()
{
	int num;
	cin>>num;
	fiboonaci_series(num);
	return 0;
}

