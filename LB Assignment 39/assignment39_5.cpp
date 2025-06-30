// Write genric program which accept N value and reverce the containts.

//Input : 10   20  30  10  30  40  10  40  10 

//Output :  10	40	10	40	30	10	30	20	10

#include<iostream>
using namespace std;

template<class T>
void Reverse(T arr[],int iSize)
{
	for(int i = iSize;i >= 0;i--)
	{
		printf("\n%d",arr[i]);
	}
}
	
int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	for(int i = 0;i < 9;i++)
	{
		cout<<arr[i];			//10	40	10	40	30	10	30	20	10
	}
	Reverse(arr,9);

	return 0;
}