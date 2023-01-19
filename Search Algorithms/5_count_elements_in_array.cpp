#include<iostream>
using namespace std;

void occur(int arr[], int size, int freq[])
{
	for (int i = 0 ; i < size; i++)
	{
		int count = 1;
		
		for (int j = i+1 ; j < size ; j++)
		{
			if(arr[i] == arr[j])
			{
				count +=1;
				freq[j] = 0;
			}
		}
		if(freq[i] != 0)
		{
			freq[i] = count;
		}

	}
	for (int k = 0; k < size; k++)
	{
		if (freq[k] != 0)
		{
		cout << arr[k] << " occur " << freq[k] << " times " << endl;
		}
	}
}
int main()
{
	int arr[8] = {1,2,3,1,2,3,5,6};
	int freq[8] = {-1,-1,-1,-1,-1,-1,-1,-1};
	occur(arr,8,freq);
	return 0;
}

