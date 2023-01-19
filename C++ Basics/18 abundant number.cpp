#include<iostream>
using namespace std;

int abundant_number(int num)
{
	int sum = 0;
	for(int i=1; i<num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
			
		}
		
	}
	if(sum>num)
	{
		cout<<"IT is abundant number";
	}
	else
	{
		cout<<"not";
	}
	
	
}
int main()
{
	int num;
	cin>>num;
	abundant_number(num);
	return 0;
}

