#include<iostream>
using namespace std;

void check_palindrone (int num){
	int sum = 0,a = num;
	while(num>0){
//	first we reverse the number
	sum = sum*10 +num%10;
	num = num/10;
	}
// check with orginal number  
	if (a == sum){
		cout<<"The Given Number :"<<a<<" is palindrone\n";
	}
	else{
		cout<<"Not palindrone";
	}

}

int main()
{
	int num ;
	cout<<"Enter the number";
	cin>>num;
	check_palindrone(num);

	return 0;
}

