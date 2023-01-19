#include<iostream>
using namespace std;

int find_lcm(int num1_den, int num2_den)
{
	int lcm = 1;
	for (int i = 1; i <= num1_den && i <= num2_den; i++ )	
	{
		if (num1_den % i == 0 && num2_den % i == 0)
		{
			lcm = lcm * i;		
		}
	}
	lcm = (num1_den * num2_den)/lcm;
	return lcm;
}
int find_hcf(int ans_num, int ans_den)
{
	int hcf = 1;
	for (int i = 1; i <= ans_num && i <= ans_den; i++ )	
	{
		if (ans_num % i == 0 && ans_den % i == 0)
		{
			hcf = hcf * i;		
		}
	}
	return hcf;
}
int main()
{
	int num1_num,num1_den;
	int num2_num,num2_den;
	
	cout<< "Enter Numerator and denominator of First number : ";
	cin >> num1_num >> num1_den ;
	
	cout<< "Enter Numerator and denominator of Second number : ";
	cin >> num2_num >> num2_den ;
	
	int ans_num = ((find_lcm(num1_den ,num2_den) / num1_den ) * num1_num ) + ((find_lcm(num1_den ,num2_den) / num2_den ) * num2_num ) ;
	int ans_den = find_lcm(num1_den , num2_den); 
	
	int hcf = find_hcf(ans_num , ans_den);
	
	
	if (hcf < ans_num || hcf < ans_den)
	{
		int final_num = ans_num / hcf;
		int final_den = ans_den / hcf;
		cout << "The fraction : "<< num1_num << "/"<<num1_den << " + " << num2_num << "/"<<num2_den<< " = "<< final_num << "/" <<final_den;
	}
	else
	{
		cout << "The fraction : "<< num1_num << "/"<<num1_den << " + " << num2_num << "/"<<num2_den<< " = "<< ans_num << "/" <<ans_den;
		
	}
	
	return 0;
}

