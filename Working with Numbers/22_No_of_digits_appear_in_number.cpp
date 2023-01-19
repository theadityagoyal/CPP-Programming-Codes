#include<iostream>
using namespace std;

int search_digit (long long num, int search)
{
	int arr[20];
	int rem, pos = 0;
	
	while (num > 0)
	{
		rem = num % 10;
		arr [pos] = rem;
		num = num /10;
		pos++;
	}
	
	int count = 0;
	for (int i = 0; i <= pos; i++ )
	{
		if (arr[i] == search)
		{
			count += 1;
		}
	}
	return count;
	
}

int main()
{
	long long num, search1 ,search2;
	cout << "Enter the Number : ";
	cin >> num;
	
	cout << "Enter the digit for count :";
	cin >> search1;
	cout << "Enter the another digit for count :";
	cin >> search2;
	
	int ans1 = search_digit(num , search1);
	int ans2 = search_digit(num , search2);
	
	cout << "Number : "<<search1 <<" count : " << ans1 << endl; 
	cout << "Number : "<<search2 <<" count : " << ans2 ; 

	return 0;
}

