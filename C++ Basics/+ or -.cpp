#include<iostream>

using namespace std;

void check_num(){
	int num;
	cout<<"Enter the number";
	cin>>num;
	
	if (num<0){
	
	cout<<"Number is Negative";
    }
	else{
		cout<<"Number is POsitive";
		
	}
	
	
}

int main(){
	check_num();
	return 0;
}
