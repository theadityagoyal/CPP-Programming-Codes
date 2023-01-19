#include<iostream>
#include<math.h>
using namespace std;

int length_of_number(int num1)
{
	int len = 0;
	while(num1>0)
	{
		len = len +1;
		num1 = num1/10;
		
	}
	return len;
}
int binary_to_decimal(int num2)
{
	int dec = 0, digit, temp = num2; 

	for(int i = 0 ;i<(length_of_number(temp)); i++)
	{
		digit = num2 % 10;

		dec = dec + digit * pow(2,i); 
		
		num2 = num2 / 10;		
	}
	
	return dec;
	
} 
int octal_to_decimal(int num2)
{
	int dec = 0, digit, temp = num2; 

	for(int i = 0 ;i<(length_of_number(temp)); i++)
	{
		digit = num2 % 10;

		dec = dec + digit * pow(8,i); 
		
		num2 = num2 / 10;		
	}
	
	return dec;
	
}


int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	
	int bin = binary_to_decimal(number);
	int oct = octal_to_decimal(number);
	cout<< "Binary : decimal - "<<bin<<endl;
	cout<< "octal : decimal - "<<oct<<endl;
	
	return 0;
}

