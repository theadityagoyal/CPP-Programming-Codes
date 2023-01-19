#include<iostream>
using namespace std;

int check_prime (int num)
{
	int i = 2;
	if (num == 0)
		return 0;
	
	if(num % i == 0)
		return 0;
		
	if (i * i > num)
		return 1;
	check_prime(i+1);
} 
int main()
{
	int num;
	cin >> num;
	int ans = check_prime(num);
	if (ans == 1)
		cout<<"prime";
	else
		cout<< "Not prime";

	return 0;
}

