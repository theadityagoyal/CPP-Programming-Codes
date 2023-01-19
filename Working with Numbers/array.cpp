#include<iostream>
using namespace std;

int getmax(int num[], int size)
{
	int max = INT_MIN; //int ki sabse choti value -2^31
	
	for(int i = 0; i< size; i++)
	{
		if(num[i] > max)
		{
			max = num[i];
		}
	}
	return max;
}

int getmin(int num[], int size)
{
	int mini = INT_MAX; //int ki sabse badi value 2^31
	
	for(int i = 0; i<size; i++)
	{
		mini = min(mini,num[i]);
//		if(num[i] < min)
//		{
//			min = num[i];
//		}
	}
	return mini;
}

int main()
{
	int size;
	cout<< "Enter the how many numbers you want : ";
	cin >> size;
	cout<<"Enter "<<size << " Numbers \n";
	int arr[100];
	
	for(int i = 0; i<size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "The Maximum Value is " << getmax( arr , size) << "\n" <<"The Minumum value is " << getmin(arr, size);
	return 0;
}

