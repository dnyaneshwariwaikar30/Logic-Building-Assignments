// Write genric program which accept N value and search first occurence of any specific value.

//Input : 10   20  30  10 30 40 10 40 10 

//Value to check frequency : 40

//Output :  6

#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T arr[],int iSize,T iNo)
{
	int i = 0;
	int index = 1;
	for(i = 0; i < iSize;i++)
	{
		if(arr[i] == iNo)
		{
			break;
		}
		 index++;
	}
	
	if(arr[i] != iNo)
	{
		return 0;
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