#include<iostream>
using namespace std;

void no_of_digits(int num)
{
	int count = 0 , a = num;
	while(num > 0)
	{
		num = num / 10;
		count ++;
	}
	cout<<"No. of digits in "<< a << " is : "<< count; 	
}

int main()
{
	int num; 
	cout << "Enter the number ";
	cin >> num;
	no_of_digits(num);
	return 0;
}

