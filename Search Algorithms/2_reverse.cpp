#include<iostream>
using namespace std;

void reverse(int array[],int size)
{
	int start = 0;
	int end = size -1;
	
	
	while (start <= end)
	{
		swap(array[start], array[end]);
		start++;
		end--;
	}

}

void printArray(int arr[], int size)
{
	for (int i = 0 ; i < size  ; i++)
	{
		cout << arr[i] << " ";
	}
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
	reverse(arr,size);
	
	printArray (arr,size);
	

	return 0;
}

