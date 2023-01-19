#include<iostream>
using namespace std;

void dec_to_hex(int decimal)
{
	char result[100];
	int pos = 0;
	
	while (decimal > 0)
	{
		int rem = 0;
		
		rem = decimal % 16;
		if (rem < 10)
		{
			result[pos] = rem + 48;
			pos++;
		}
		else if (rem >=10)
		{
			result[pos] = rem + 55;
			pos++;
		}
		decimal /=16;
		
	}
	cout<< "Hexadecimal is :";
		
	for(int j = pos - 1; j >= 0; j--)
	{
		cout << result[j];
	}
	 
}
int main()
{
	int num;
	cout<< "Decimal number";
	cin>>num;
	
	dec_to_hex(num);
	return 0;
}
