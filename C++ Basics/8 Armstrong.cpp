#include<iostream>
#include<cmath>
using namespace std;

void check_Armstrong(int num){
	int length =0,sum = 0,a = num,a1 = num,a2 =num;

//to calculate the length of digits
	while(a>0)
	{
		a= a/10;
		length=length+1;
	}
	
//to calculate the sum
	while(a1>0){
	sum = sum + pow((a1%10),length);
	a1 = a1/10;
	}
	if (a2 == sum ){
		cout<<"Number is armstrong";
	}
	else{
		cout<<"not armstrong";
	}

}

int main()
{
	int num ;
	cout<<"Enter the number";
	cin>>num;
	check_Armstrong(num);
	return 0;
}

