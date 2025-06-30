//Write genric program to accept N value from user and return Smallest values.

#include<iostream>
using namespace std;

template<class T>

T Min(T arr[],int iSize)
{
	T Min = arr[0];
	int i = 0;
	
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	return Min;
}

int main()
{
	int arr[] = {10,20,30,40,50};
	float brr[] = {10.5,3.7,9.8,8.7};
	
	int iRet = Min(arr,5);
	cout<<"Largest value is : "<<iRet<<endl;		//10
	
	float fRet = Min(brr,4);
	cout<<"Largest value is :"<<fRet<<endl;			//3.
		
	return 0;
}