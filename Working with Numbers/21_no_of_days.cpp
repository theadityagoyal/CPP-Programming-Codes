#include<iostream>
#include<string>
using namespace std;

int days_common[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int days_Leap[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int leap_year(int year)
{
	if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}	
}

int no_of_days (int month, int year)
{
//	check year is leap or not

	int leap = leap_year(year);
	
	if (leap == 1)
	{
		return days_Leap[month];
	}
	else
	{
		return days_common[month];
	}
}

int main()
{
	int year ,month;
	
	string month_[] = {"", "January" ,"Febuary", "March", "April","May", "June",
						"July", "August", "September", "October", "November", "December"};
						
	cout << "Enter The year : ";
	cin >> year;
	
	cout << "Enter the month of year :";
	cin >> month;
	
	
	int ans = no_of_days (month, year);
	cout << "No of days in " << month_[month]  << " month : " << ans << " ||" ;  
	return 0;
}

