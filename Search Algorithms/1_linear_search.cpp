#include<iostream>
using namespace std;

bool search(int array[],int size, int key)
{
	for (int i = 0 ; i < size ; i++)
	{
		if (array[i] == key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int size;
	cout << "Enter the size of an array " << endl;
	cin >> size;
	
	int arr[100];	
	
	for (int i = 0 ; i < size ; i++)
	{
		cin >> arr[size];
		
	}
	int key;
	cout << "Enter the key for search " << endl;
	cin >> key;
	
	bool found	= search (arr, size, key);
	if (found)
		cout << "true";
	else
		cout << "false";
	
	return 0;
}

