#include<iostream>
using namespace std;

void sec_element(int arr[], int size)
{
	int smallest = arr[0];
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] < smallest )
		{
			smallest = arr[i];
		}
	}
	
	int sec_smallest = INT_MAX;
	
	for (int j = 0; j < size; j++)
	{
		if (arr[j] < sec_smallest && arr[j] != smallest )
		{
			sec_smallest = arr[j];
			
		}
	}
	int third_smallest = INT_MAX;
	
	for (int k = 0; k < size; k++)
	{
		if (arr[k] < third_smallest && arr[k] != sec_smallest && arr[k] != smallest )
		{
			third_smallest = arr[k];
			
		}
	}
	cout << third_smallest;
}
int main()
{
	int arr[8] = {9,3,4,5,33,-234,45,35};
	sec_element(arr, 8);
	return 0;
}

