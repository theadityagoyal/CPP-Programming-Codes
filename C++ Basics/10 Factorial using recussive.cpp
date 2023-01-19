#include<iostream>
using namespace std;


int getfactorial(int num){
	
	if (num == 0){
		return 1;
	}
	return num * getfactorial(num-1);
	
	
}
int main()
{
	int num;
	cin>>num;
	
	int fact = getfactorial(num);
	cout<<"Fact"<<num<<" : "<<fact;
	cout<<num;
	return 0;
}

