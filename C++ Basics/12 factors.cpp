#include<iostream>
#include<math.h>
using namespace std;

int length(int num)
{
	int j = 0;
	for(int i = 1; i <= (num) ; i++)
	{
		if(num % i == 0)
		{
		    j++;
		}
	}
	return j;
}

int* factors(int num)
{
	static int fact[100] ;
	int j = 0;
	for(int i = 1; i <= (num) ; i++)
	{
		if(num % i == 0)
		{
			fact[j] = i;
		    j++;
		}
	}
	return fact;
}

int main()
{
	int num = 24;
	int* ptr;
    ptr = factors(num);

    for(int i = 0; i < length(num); i++) {
        cout << ptr[i] << " ";
    }
	return 0;
}
