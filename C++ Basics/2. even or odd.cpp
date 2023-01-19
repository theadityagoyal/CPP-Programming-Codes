#include<iostream>
using namespace std;

void check_even_odd (int num){
	if (num%2==0){
		cout<<"ITs even"<<"\t"<<num<<"\n";
	}
	else{
		cout<<"Its odd\n";
	}
}

void check_num(int num){
	
	if (num<0){
	
	cout<<"Number is Negative";
    }
	else{
		cout<<"Number is POsitive";
		
	}
	
	
}
int main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	
	check_even_odd(num);
	check_num(num);
	
	return 0;
}

