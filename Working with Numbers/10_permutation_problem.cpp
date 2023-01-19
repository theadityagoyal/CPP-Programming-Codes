#include<iostream>
using namespace std;

int fact(int num)
{
	int fact = 1;
	while (num > 0)
	{
		fact = fact * num;
		num --;
	}
	return fact;
}
int main()
{
	int number_of_students;
	cout << "number_of_students : ";
	cin >> number_of_students;
	
	int number_of_seats;
	cout << "number_of_seats : ";
	cin >> number_of_seats;
	
	int final = fact (number_of_students) / fact (number_of_students - number_of_seats) ;
	
	
	
	cout <<"Total possible arrangement : " <<final;
	return 0;
}

