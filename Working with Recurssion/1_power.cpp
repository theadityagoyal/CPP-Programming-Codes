#include<iostream>
using namespace std;
int power(int num, int pow)
{
	if (pow == 0 )
		return 1;
		
	return num * power(num , pow - 1);
}
int main()
{
	int num,pow; 
	cout << "Enter the base , power :";
	cin >> num >> pow;
	int ans = power(num, pow);
	cout <<"Required ans "<< num <<"^"<<pow<<" : "<< ans;
	return 0;
}

