#include<iostream>
using namespace std;

int firstocc ( int arr[], int n , int key)
{
	int start = 0;
	int end = n - 1;
	int mid = (start + end )/ 2 ;
	
	int ans = -1;
	
	while(start <= end)
	{
		if (key == arr[mid])
		{
			ans = mid;
			end = mid - 1;	
		}
		else if (key < arr[mid])
		{
			end = mid -1;
		}
		else if (key >arr[mid])
		{
			start = mid + 1;
		}
		
		mid = (start + end ) / 2;
	}
	return ans;
}

int lastocc ( int arr[], int n , int key)
{
	int start = 0;
	int end = n - 1;
	int mid = (start + end )/ 2 ;
	
	int ans = -1;
	
	while(start <= end)
	{
		if (key == arr[mid])
		{
			ans = mid;
			start = mid + 1;	
		}
		else if (key < arr[mid])
		{
			end = mid -1;
		}
		else if (key >arr[mid])
		{
			start = mid + 1;
		}
		
		mid = (start + end ) / 2;
	}
	return ans;
}

int main()
{
	int arr [9] = {1,3,3,4,5,6,6,6,7};
	cout << "First occurance of 6 at index " << firstocc(arr,9,6) << endl;
	cout << "last occurance of 6 at index " << lastocc(arr,9,6);
	return 0;
}

