#include<iostream>
#include<string>
using namespace std;

string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
 
// strings at index 0 and 1 are not used, they is to
// make array indexing simple

string ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
                 


string number_to_words (int num, string s)
{
	string str = "";
//	if (num > 999)
//	{
//		str += one [num / 1000] + "thousand" + one [(num / 100) % 10] + " hundred " + ten [(num / 10) % 10] + one [num % 10];
//	}
	
	if (num > 99)
	{
		str += one [num / 100] + "hundred and " + ten [(num / 10) % 10] + one [num % 10];
	}
	else if (num > 19)
	{
		str += ten [num / 10] + one [num % 10];
	}
	else
	{
		str += one [num];
	}
	if(num)
	{
		str += s;
	}
	
	return str;
}

string convert_to_words(long long int n)
{
	string out;
	
	out += number_to_words((n / 1000000000000000000) , "Quintillion, ");
	out += number_to_words((n / 1000000000000000) % 1000, "Quadrillion, ");
	out += number_to_words((n / 1000000000000) %1000, "Trillion, ");
	out += number_to_words((n / 1000000000) %1000, "Billion, ");
	out += number_to_words((n / 1000000) %1000, "Million, ");
	out += number_to_words(((n / 1000) % 1000), "Thousand, ");
	out += number_to_words(((n / 100) %10) ,"Hundred ");
	
	if (n > 100 && n % 100 )
	{
		out += "and ";
	}
	
	out += number_to_words((n % 100), "");
	
	if (n==0)
	{
		out += "zero";
	}
	return out;	
}
int main()
{
	long long int num = 1234567890123456789;
//	cin >> num;
	cout <<num <<"\n" <<convert_to_words(num) << endl;
	return 0;
}

