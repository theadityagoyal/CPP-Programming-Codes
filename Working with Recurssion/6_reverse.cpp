#include<iostream>
using namespace std;

void reverse (int n)
{
	if (n == 0){
		return;
	}
	cout << n % 10;
	reverse(n /10);
}
int main()
{
	int num = 12344;
	reverse (num);
	return 0;
}

