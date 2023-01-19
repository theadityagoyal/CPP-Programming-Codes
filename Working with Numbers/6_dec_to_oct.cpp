#include<iostream>
using namespace std;

void dec_to_oct(int num)
{
	
	
	int oct[32], i = 0;
	while(num > 0)
	{
		oct[i] = num % 8;
		num = num/8;
		i++;		
	}
//	for printing in reverse order
	for (int j = i - 1; j>=0; j--)
	{
		cout<<oct[j];
	}	
}
int main()
{
	int num;
	cin>>num;
	dec_to_oct(num);
	return 0;
}

