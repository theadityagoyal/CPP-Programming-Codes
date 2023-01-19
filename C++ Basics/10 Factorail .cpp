#include<iostream>
using namespace std;

void Factorial( int num)
{
	long long int fact = 1;
	
	for (int i = 1; i<=num; i++)
	{
		fact = fact * i;
		cout<<fact<<", ";
		
		
	}
	cout<<"Factorial of "<<num<<" is :"<<fact;
	
}
int main()
{
	int num;
	cin>>num;
	Factorial(num);
	return 0;
}

