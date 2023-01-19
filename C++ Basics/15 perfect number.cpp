#include<iostream>
using namespace std;


int perfect_number(int num)
{
	int sum = 0;
	for (int i = 1; i<num; i++)
	{
		if (num % i == 0)
		{
			cout<<i<< " + ";
			sum = sum + i;
			
		}
	}
	if (num==sum)
	{
		cout<<" = "<<sum<<" - It is Perfect number";
	}
	else
	{
		cout<<" = "<<sum<<" - Not perfect number";
	}
	
}
int main()
{

	int num ;
	cin >>num;
	perfect_number(num);
	
	return 0;
}

