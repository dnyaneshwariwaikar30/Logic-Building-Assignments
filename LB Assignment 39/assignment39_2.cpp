// Write genric program which accept N value and count frequency of any specific value.

//Input : 10   20  30  10  30  40  10  40  10 

//Value to check frequency : 10

//Output :  4

#include<iostream>
using namespace std;

template<class T>

int frequence(T arr[],int iSize,T iNo)
{
	int icnt = 0;
	int i = 0;
	for(i = 0;i < iSize;i++)
	{
		if(arr[i] == iNo)
		{
			icnt++;
		}
	}
	return icnt;	
}
	
int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	
	int iRet = frequence(arr,9,10);
	
	cout<<"value is :"<<iRet<<endl;
		
	return 0;
}
