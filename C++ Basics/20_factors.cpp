#include <iostream>
#include <math.h>
using namespace std;

void getFactors(int n)
{
	int j;
	bool flag = false;
	
    for(j = 1; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            cout << j << " "; 
        }
	    if (j == n/j)
		{   
            flag = true;
    	}
    }
    if (flag)
    {
    	j -= 2;
	}
	
	for(; j >= 1; j--)
	{
		if (n % j == 0)
		{
			cout << (n / j) << " ";
		}
	}
    
}

int main()
{
    int num =24;
    getFactors(num);
}
