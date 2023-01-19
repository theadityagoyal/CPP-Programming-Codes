#include<iostream>
using namespace std;

int automorphic_number(int num)
{
	int square;
	square = num * num;
	
	while(num != 0)
	{
		if (num % 10 == square %10)
		{
			return 1;
		}
		num = num/10;
		square = square / 10;
	}
	return 0;
}

int main()
{
	int num;
	cin >> num;
	
	int sq = num*num;    
    if(automorphic_number(num))
    {
    	cout << "Num: "<< num << ", Square: " << sq << " - is Automorphic";
    }
	else
    {
		cout << "Num: "<< num << ", Square: " << sq << " - is not Automorphic";
	}
	return 0;
}
