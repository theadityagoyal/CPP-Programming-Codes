#include<iostream>
using namespace std;

void hcf(int num1, int num2)
{
	int hcf = 1;
	for(int i = 1; i<=num1 || i<=num2; i++)
	{
		if(num1 % i ==0 && num2 % i == 0)
		{
			hcf = i;
		}	
	
	}
	cout<<"The Highest Common Factor of "<<num1<<" and "<<num2<<" is "<<hcf<<"\n";	
	
}

void gcf(int num1, int num2)
{
	int gcf = 1;
	for(int i = 1; i<=num1 || i<=num2; i++)
	{
		if(num1 % i ==0 && num2 % i == 0)
		{
			gcf = i;
		}	
	
	}
	cout<<"The greatest common factor of "<<num1<<" and "<<num2<<" is "<<gcf<<"\n";	
	
}

void lcm(int num1, int num2)
{
	int lcm =1;
	for(int i=1; i<=num1 || i<=num2; i++)
	{
		if(num1 % i ==0 && num2 % i == 0)
		{
			lcm = i;
		}
	}
	lcm = (num1 * num2)/lcm;
	cout<<"The Least common factor of "<<num1<<" and "<<num2<<" is "<<lcm;
}

int main()
{
	int num1, num2;
	cout<<"Enter the First number : "<<"\n";
	cin>>num1;
	cout<<"Enter the secong number : "<<"\n";
	cin>>num2;
	
	hcf(num1,num2);
	gcf(num1,num2);
	lcm(num1,num2);
	return 0;
}

