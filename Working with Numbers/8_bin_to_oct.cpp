#include<iostream>
#include<math.h>
using namespace std;

int bin_dec(int binary)
{
	int  i = 0, result =0;
	while (binary != 0)
	{
		int rem = binary % 10;
		result = result + rem * (pow(2,i));
		binary = binary / 10;
		i++;
	}
	return result;
	
}
void dec_oct(int num)
{
	int result[100], pos = 0;
	while (num != 0)
	{
		
		int rem  = num % 8;
		result[pos] =  rem;
		num = num /8;
		pos++;
	
	}
	for (int j = pos -1; j>=0; j-- )
	{
		cout<< result[j];
	}
		
	
}
int main()
{
	int binary;
	
	cout<< "Enter Binary number = " ;
	cin >> binary;
	
	int ans = bin_dec(binary);
	cout << "Binary : Decimal = "<< ans <<endl;
	
	cout << "Decimal : octal  = ";
	dec_oct(ans);
	
	
	return 0;
}

