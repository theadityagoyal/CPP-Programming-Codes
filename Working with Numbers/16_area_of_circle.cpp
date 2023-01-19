#include<iostream>
using namespace std;

void areaofcircle(float radius)
{
	double area = (3.14 * (radius * radius));
	cout<< "Area of circle : "<< area;
}

int main()
{
	float radius;
	cout<< "Enter the radius of circle : ";
	cin >> radius;
	areaofcircle(radius);
	
	

	return 0;
}

