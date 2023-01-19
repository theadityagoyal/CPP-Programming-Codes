#include<iostream>
using namespace std;

int largest (int arr[], int size)
{
	int max_ele = INT_MIN;
	for (int i = 0; i < size ; i++)
	{
		if (arr[i] > max_ele)
		{
			max_ele = arr[i];
		}
	}
	return max_ele;
}
int main()
{
	int arr[8] = {1,34,-345,6,-2,0,2,3};
	int ans = largest(arr, 8);
	cout << ans; 

	return 0;
}

