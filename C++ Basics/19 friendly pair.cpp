#include<iostream>
using namespace std;

int friendly_pair(int num)
{
	int sum = 0;
	for(int i =1; i<num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	return sum;
}
int main()
{
	int num1,num2;
	cout<<"Enter First number: ";
	
	cin>>num1;
	
	cout<<"Enter second number: ";
	
	cin>>num2;
	
	int sum1 = friendly_pair(num1);
	int sum2 = friendly_pair(num2);
	
	if(sum1 / num1 ==  sum2 / num2 )
	{
		cout <<"Friendly Pair";
	}
	else
	{
		cout<<"Not friendly pair";
	}
	
	return 0;
}

