#include<iostream>
using namespace std;

void reverse(int array[],int size)
{
	int start = 0;
	int end = start + 1;
	
	
	for (int i = 0 ; i < size/2; i++)
	{
		swap(array[start], array[end]);
		start +=2;
		end = end + start;
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

