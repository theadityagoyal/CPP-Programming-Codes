#include<iostream>
using namespace std;

int check_prime(int num)
{
	int flag = 0;

	for(int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break ;
		}
	}
	if (flag == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}	
}

int main()
{
	cout<<"Prime Numbers 1 to 100\n";
	for (int i = 1; i < 100; i++)
	{
		if (check_prime(i) == 1)
		{
			cout << i << " ";
		}
	}
	return 0;
}

