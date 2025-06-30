//Write genric program to find largest number from three numbers.

#include<iostream>
using namespace std;

template<class T>

T Max(T Crr[], int iSize)
{
	T Max = Crr[0];
	int i = 0;
	
	for(i = 0; i < iSize; i++)
	{
		if(Crr[i] > Max)
		{
			Max = Crr[i];
		}
	}
	return Max;
}

int main()
{
	int Arr[] = {10,20,30,40,50};
	int iRet = Max(Arr,5);
	cout<<"Maximun number is :"<<iRet<<endl;
	
	float Brr[] = {10.11,20.22,30.33,40.44,50.55};
	float fRet = Max(Brr,5);
	cout<<"Maximun number is :"<<fRet<<endl;
	
	return 0;
}