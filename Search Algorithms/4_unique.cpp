#include<iostream>
using namespace std;
int find_unique(int arr[], int size)
{
	int ans = 0;
	for (int i = 0; i < size ; i++)
	{
		ans = ans ^ arr[i]	;
	}
	return ans;
	
}

int main()
{
	cout << "Enter the size of an array " << endl;
	int size;
	cin >> size;
	
	cout << "Enter the elements in array : " ;
	int arr[100];	
	for (int i = 0 ; i < size ; i++)
	{
		cin >> arr[i];		
	}

//	calling a function
	int ans = find_unique(arr,size);
	cout << ans;

	return 0;
}

