#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int hexadecimal(string num1)
{
	
	int len = num1.size(), digit, power = 0, base = 16;
	long long dec = 0;
	
	for(int i = len-1; i>=0; i--)
	{
		if (num1[i] >= '0' && num1[i] <= '9')
		{
			digit = int(num1[i]) - 48;
			dec =  dec + (digit * pow(base,power));
			power++;
		}
		
		else if (num1[i] >='A' && num1[i] <= 'F')
		{
			digit = int(num1[i]) - 55;
			dec = dec + (digit * pow(base,power));
			power++;
		}
		
		else if (num1[i] >='a' && num1[i] <= 'f')
		{
			digit = int(num1[i]) - 87;
			dec = dec + (digit * pow(base,power));
			power++;
		}
			
		else
		{
			cout<<"Invalid input";
			break;
		}		
	}
	return dec;	
}

int main()
{
	string num;
	cout<< "Enter the Hexadecimal number : ";
	cin >> num;
	int ans = hexadecimal(num);
	cout<< "Hexa : Decimal = "<<ans;
	return 0;
}

