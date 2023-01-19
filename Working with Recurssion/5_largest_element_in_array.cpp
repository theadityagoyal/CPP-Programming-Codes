#include<iostream>
using namespace std;

int largest_element(int n, int arr[])
{

   if(n==1) 
   	return arr[0];  // Base condition

   return max (arr[n-1] , largest_element(n-1 , arr));
}


int main()
{
	int arr[] = {13, 89, 76, 43, 7, 90, -78, 58, 785,4125};
	
	int n = sizeof(arr)/sizeof(arr[0]);

	int ans = largest_element(n , arr);
	cout << ans;
	return 0;
}

