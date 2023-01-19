#include<iostream>
using namespace std;

void check_greater_number(long long int num1,long long int num2,long long int num3){
	if (num1>=num2 && num1>=num3){
		cout<<"Number"<<num1<<"is greater than"<<num2<<num3;
	}
	else if(num2>=num1 && num2>=num3){
		cout<<"Number"<<num2<<"is greater than"<<num1<<num3;
	}
	else{
	
		cout<<"Number"<<num3<<"is greater than"<<num1<<num2;
	}
}
int main()
{
	long long int num1,num2,num3;
	cout<<"Enter three numbers \n";
	cin>>num1>>num2>>num3;
	
	check_greater_number(num1,num2,num3);
	
	
	return 0;
}

