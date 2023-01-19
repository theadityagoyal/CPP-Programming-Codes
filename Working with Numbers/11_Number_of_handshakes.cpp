#include<iostream>
using namespace std;
int check_handshakes(int num)
{
	int result = ((num -1) * num ) / 2 ;
	return result ;
}

int main()
{
	int num;
	cout << "Enter number of Person : ";
	cin >> num;
	
	int ans = check_handshakes(num);
	cout << "Number of handshakes : " << ans;
	
	return 0;
}

