#include<iostream>
using namespace std;

int binarySearch (int arr[] , int size, int key)
{
	int start = 0;
	int end = size - 1;
	
	int mid = (start + end ) / 2;
	
	while (start <= end)
	{
		if (arr[mid] == key)
			return mid;
			
//		go to right wala part
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		
//		go to left wala part
		else
		{
			end = mid -1;
		}
		
		mid = (start + end) / 2;
		
	} 
	return -1;
	
}

int main()
{
	int odd[7] = {3,4,5,6,8,9,23};
	int even[8] = {3,4,5,6,8,9,23,67};
	
	int ans = binarySearch(odd, 7 ,23);
	
	
	return 0;
}

