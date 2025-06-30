// Write genric program which accept N value and search Last occurence of any specific value.

//Input : 10   20  30  10  30  40  10  40  10 

//Value to check frequency : 40

//Output :  8

#include<iostream>
using namespace std;

template<class T>

T SearchFirst(T arr[],int iSize,T iNo)
{
	int iCnt = 0;
	T index = -1;
	for(iCnt = 0; iCnt < iSize;iCnt++)
	{
	if(arr[iCnt] == iNo)
		{
			index = iCnt;
			break;
		}
	}
	if(iCnt == iSize )
	{
		return -1;
	}
	else
	{
		return index;
	}
}
	
int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	
	int iRet = SearchFirst(arr,9,40);
	
	cout<<"value is :"<<iRet<<endl;		//8
		
	return 0;
}