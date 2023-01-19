#include<iostream>
#include<math.h>
using namespace std;

int find_hcf(int num1, int num2)
{
	if (num1 == 0 )
		return num2;
	if (num2 == 0 )
		return num1;
		
	if (num1 == num2)
		return num1;
		
	if (num1 > num2)
		return find_hcf(num1-num2, num2);
	return find_hcf(num1, num2-num1);	
}


int main()
{
	int n1 = 0 , n2 = 21;
	int ans = find_hcf(n1,n2);
	cout << "Hcf of "<< n1 << " and "<< n2 << " is : "<<ans;
	return 0;
}

