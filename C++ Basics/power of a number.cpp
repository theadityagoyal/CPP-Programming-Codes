#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double power,base;
	cout<<"Enter base ";
	cin>>base;
	cout<<"Enter power";
	
	cin>> power;
	
	double ans = pow(base,power);
	cout<<ans ;
	
	return 0;
}

