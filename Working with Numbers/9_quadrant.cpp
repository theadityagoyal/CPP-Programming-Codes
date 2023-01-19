#include<iostream>
using namespace std;

void check_quadrant(int x, int y)
{
	if (x > 0 && y >0)
	{
		cout << "point ("<<x<<","<<y<<")"<< " Lies in First quadrant";
	}
	else if (x < 0 && y >0)
	{
		cout << "point ("<<x<<","<<y<<")"<< " Lies in second quadrant";
	
	}
	else if (x < 0 && y < 0)
	{
		cout << "point (" <<x<<","<<y<< ")" << " Lies in Third quadrant";
	}
	else if (x > 0 && y < 0)
	{
		cout << "point ("<<x<<","<<y<<")"<< " Lies in Fourth quadrant";
	}
	else if (x == 0 && y== 0)
	{
		cout << "origin";
	}
	else if (x != 0 && y == 0)
	{
		cout << "point ("<<x<<","<<y<<")"<< " Lies in X-axis";
	}
	else 
	{
		cout << "point ("<<x<<","<<y<<")"<< " Lies in Y-axis";
	}
}
int main()
{
	int x , y;
	cout<<"Insert the co-ordinates \n";
	cout<<"Enter the value of x : ";
	cin >> x;
	cout<<"Enter the value of y : ";
	cin >> y;
	check_quadrant(x,y);

	return 0;
}

