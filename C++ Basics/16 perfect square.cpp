#include<iostream>
#include<math.h>
using namespace std;

bool is_perfect_square(long double num)
{	
	if(num>=0)
	{	
	long double sr = sqrt(num);
	return (sr*sr == num);	
	}
	return false;	
}
 
 
int main()
{
	long double num;
	cin>>num;
	
	if(is_perfect_square(num))
	{
		cout<<"True";
	}
	else
	{
		cout<< "False";
	}
	return 0;
}

