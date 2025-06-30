//Write genric program to accept N value from user and return Largest values.

#include<iostream>
using namespace std;

template<class T>

T Max(T arr[],int iSize)
{
	T Max = arr[0];
	int i = 0;
	
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}

int main()
{
	int arr[] = {10,20,30,40,50};
	float brr[] = {10.5,3.7,9.8,8.7};
	
	int iRet = Max(arr,5);
	cout<<"Largest value is : "<<iRet<<endl;		//50
	
	float fRet = Max(brr,4);
	cout<<"Largest value is :"<<fRet<<endl;			//10.5
		
	return 0;
}