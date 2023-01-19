#include<iostream>
using namespace std;

void dec_to_bin(int num)
{
	int bin[32], i = 0;
	while(num > 0)
	{
		bin[i] = num % 2;
		num = num/2;
		i++;		
	}
//	for printing in reverse order
	for (int j = i - 1; j>=0; j--)
	{
		cout<<bin[j];
	}	
}
int main()
{
	int num;
	cin>>num;
	dec_to_bin(num);
	return 0;
}

