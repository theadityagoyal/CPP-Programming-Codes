#include<iostream>
using namespace std;

void harshad_number(int num)
{
	int sum = 0 ,a =num;
	while( num > 0)
	{
	sum = sum + num % 10;
	num = num /10;
	
	}
	cout<<sum;
	if (a % sum == 0)
	{ 
		cout<<"Its harshad number";
	}
	else
	{
		cout<<"its not harshad number";
	}
}

int main()
{

	int num ;
	cin>> num;
	harshad_number(num);
	return 0;
}

