#include<iostream>
#include<math.h>
using namespace std;

void roots_quadratic ( double a, double b, double c)

{
	if (a > 1 && b > 1 && c > 1)
	{
		cout <<"Quadratic Equation : "<< a  <<"x^2 + " << +b << "x + " << +c << " = 0"<< endl;
	}
	else if (a < 0 && b < 0 && c < 0)
	{
		cout <<"Quadratic Equation : "<< a  <<"x^2" << b << "x" << c << " = 0"<< endl;
	}
	else if ( a == 1 && b == 1 && c == 1)
	{
		cout <<"Quadratic Equation : "<<"x^2 + " << "x + " << c << " = 0"<< endl;
	}
	else 
	{
		cout <<"Quadratic Equation : "<< a  <<"x^2 + (" << b << "x )+ (" << c << ") = 0"<< endl;
		
	}
	
	if ( a != 0)
	{

		double d = ((b * b) - (4*a*c));
	
		if (d > 0)
		{
			cout << "Real and Different roots are found\n";
			
		
			double root1 =  ((- b + sqrt(d) ) / 2 * a ); 
			double root2 =  ((- b - sqrt(d) ) / 2 * a ); 
		
			cout << "root 1 : " << root1 << " and Root 2 : " << root2 << endl; 
		
		
		}
		else if (d < 0)
		{
			cout << "Complex (imaginary) roots :" << endl;
		 
			double real_part = (- b / (2 * a));
			double imaginary_part = sqrt(-d)/(2 * a);
		
			cout << "roots : "<< real_part << " +/- " << imaginary_part <<"i";
		
		}
		else 
		{
			cout << "Real and equal roots :" << endl;
			double root1 = (- b + sqrt(d)) / (2 * a) ;
		
			cout << "root : " << root1;
		}
   	}
   	else 
   	{
   		cout << "Invalid input a != " << a << endl;
	}
}



int main()
{
	double a , b , c;
	cout << "In general Quadratic Equation : ax^2 + bx + c = 0 || " << endl;
	cout << "Enter value of a , b , c : ";
	cin >> a >> b >> c ;
	roots_quadratic(a,b,c);
	
	return 0;
}

