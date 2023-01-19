#include<iostream>
using namespace std;

void check_prime(int num){
	int flag = 0;
	for(int i = 2; i<num; i++){
		if (num % i==0){
			flag = 1;
			break;			
		}			
	}
	
	if(flag==1){
		cout<<"Not Prime\n";
	}
	else{
		cout<<"prime";
	}
	
}
int main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	check_prime(num);
	return 0;
}

