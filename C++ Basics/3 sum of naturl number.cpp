#include<iostream>
using namespace std;


int main()
{   
	int range1,range2,sum=0;
	cout<<"Enter the range\n";
	cin>>range1;
	cin>>range2;
	
	for(int i = range1; i<=range2;i++){
		sum = sum + i;
		
	}
	cout<<sum;
	
	return 0;
}

