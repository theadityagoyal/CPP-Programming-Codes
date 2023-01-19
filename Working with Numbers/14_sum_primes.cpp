#include<iostream>
using namespace std;

int prime(int num)
{
	int flag = 0;
	for (int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			flag = 1;
			break;
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
void check_sum(int num)
{
	int i , r, sum, check1, check2;
	for (i = 1; i <= (num / 2); i++)
	{
		r = (num - i);
		sum = i + r ;
		
		if (sum == num)
		{
			check1 = prime(i);
			check2 = prime(r);
		}		
		if(check1 == 1 && check2 == 1)
		{
			cout<<num<<" can be expressed as the sum of prime numbers as " <<i << " + " << r << " = " << sum << endl;		
		}
	}
}

int main()
{
	int num;
	cin >> num;
	check_sum(num);

	return 0;
}

