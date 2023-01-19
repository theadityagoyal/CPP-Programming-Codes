#include<iostream>
using namespace std;
int fib(int num)
{
	if (num == 0 || num == 1)
		return num;
	return (fib(num-1) + fib(num-2) ) ;
	
}
int main()
{
	int num; 
	cout << "Enter the number :";
	cin >> num ;
	int ans = fib(num);
	cout <<"The "<< num <<"th term of Fibonnacci-series : " <<ans;
	return 0;
}

