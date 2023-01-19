#include<iostream>
using namespace std;

int main()
{
	float base,exponent;
	double result=1.0 ;
	cout<<"Enter base"; 
	cin>>base;
	cout<<"Enter power"; 
	cin>>exponent;
	
//	while(exponent != 0)
//	{
//		result = result * base	
//	}
	for(int i=1;i<=exponent;i++)
	{
		result= base*result;
	}
	cout<<result;
	return 0;
}

