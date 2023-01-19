#include<iostream>
using namespace std;

int factorial (int digit)
{
	int fact =1 ;
	for (int i = 1; i<=digit; i++)
	{
		fact = fact *i;
	}
	return fact;
}

void strong_number(int num)
{
	int sum = 0, digit , a = num;
	while(num>0)
	{
		digit = num % 10;
		sum = sum + factorial(digit);
		num = num/10;
	}
	if (a == sum)
	{
		cout<<"It is strong number"<<sum;
	}
	else
	{
		cout<<"Not strong number";
	}

}

int main()
{
	int num ;
	cin >>num;
	strong_number(num);
	return 0;
}

