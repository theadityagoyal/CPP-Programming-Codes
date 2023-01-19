#include<iostream>
using namespace std;

void convert_num(int num)
{
	int i = 0 ;
	int final[1000];
	
	while(num>0)
	{
		int rem = num % 10;
		
		if (rem == 0)
		{
			final[i]= 1;
		}
		else 
		{
			final[i]= rem;
		}		
		num = num /10;
		i++;
		
	}
	for(int j = i - 1; j >= 0; j--)
	{
		cout << final[j];
	}	
}
int main()
{
	int num;
	cin >> num;
	convert_num(num);

	return 0;
}

