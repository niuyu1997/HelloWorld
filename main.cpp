#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
	for(int i = 0; i < size - 1; ++i)
	   {
		for(int j = 0; j < size - 1 - i; ++j)
			{
			   tmp = arr[j];
			   arr[j] = arr[j + 1];
			   arr[j + 1] = tmp;
			}
	   }
}
int main()
{
	int arr[] = {12, 4, 89, 21, 12.,78};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, size);
	return 0;
}
