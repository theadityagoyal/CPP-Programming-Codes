#include<iostream>
using namespace std;

void sum_of_digits_of_number(int num){
	int sum = 0;
	while (num>0){
		sum = sum + (num % 10);
		num = num/10;		
	}
	cout<<"sum of digits is : "<<sum<<"\n";
}

void reverse_number(int num){
	int reverse =0;
	while (num>0){
		reverse = (reverse*10) + (num %10);
		num = num/10;
				
	}
	cout<<"The reverse of number is: "<<reverse;
}
int main()
{
	int num;
	cin>>num;
	sum_of_digits_of_number(num);
	reverse_number(num);
	return 0;
	
}

