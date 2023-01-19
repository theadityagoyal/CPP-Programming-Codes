#include<iostream>
#include<string>
using namespace std;

string one[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven" , 
				"eight ","nine ", "ten ", "eleven ", "twelve ","Thirteen ", 
				"Fourteen ","Fifteen ", "sixteen ", "seventeen ", "eighteen ",
				 "nineteen "};
				
string ten[] = {"","", "twenty ", "thirty ","fourty ","fifty ","sixty ","seventy ",
					"eighty ","ninety "};

string numberwords(int n, string s)
{
	string out = "";
	
//	if (n > 99)
//	{
//		out +=one [(n / 100)] + " hundred" + ten [(n / 10) % 10] + one [(n % 10)];
//	}

	if (n > 19)
	{
		out += ten [(n / 10)] + one [(n % 10)];
	}
	else
	{
		out += one[n];
	}
	
	if (n)
	{
		out += s;
	}
	return out;
}

string convertword (long long n)
{
	string str ;
	
	str += numberwords ((n / 100000000000000000) , "Shank, ");
	str += numberwords ((n / 1000000000000000) %100 , "Padma, ");
	str += numberwords ((n / 10000000000000) %100 , "Neel, ");
	str += numberwords ((n / 100000000000) %100 , "Kharab, ");
	str += numberwords ((n / 1000000000) %100 , "Arab, ");
	str += numberwords ((n / 10000000) %100 , "Crore, ");
	str += numberwords ((n / 100000) %100 , "Lakh, ");
	str += numberwords ((n / 1000) %100 , "Thousand, ");
	str += numberwords ((n / 100) %10 , " Hundred, ");

	
	if (n > 100 && n % 100)
	{
		str += "and ";
	}
	
	str += numberwords ((n % 100) , "||||");
	
	if (n == 0)
	{
		str +="zero";
	}
	return str;
}

int main()
{
	long long num;
	cin >> num;
	cout << num << "\n" << convertword(num) << endl;
	return 0;
}

