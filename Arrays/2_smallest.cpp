#include<iostream>
using namespace std;

int largest (int arr[], int size)
{
	int min_ele = INT_MAX;
	for (int i = 0; i < size ; i++)
	{
		min_ele = min(arr[i],min_ele);
	}
	return min_ele;
}
int main()
{
	int arr[8] = {1,34,-345,6,-2,0,2,3};
	int ans = largest(arr, 8);
	cout << ans; 

	return 0;
}

