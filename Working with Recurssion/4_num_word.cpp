#include<iostream>
#include<string>
using namespace std;

void num_word(long num, string one[])
{
	if (num == 0 )
		return;				
	num_word(num / 10, one);	
	cout<< one[num % 10];	
}

int main()
{
	string one[] = {"zero ","one ","two ","three ","four ",
				"five ","six ","seven ","eight ","nine " };
				
	long num ;
	cin >>num;
	num_word(num, one);
	return 0;
}

