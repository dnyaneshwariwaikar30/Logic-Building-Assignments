//Write genric program to accept N value from user and return addition of that value.

#include<iostream>
using namespace std;

template<class T>

T AddN(T arr[],int iSize)
{
	T Sum;
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		Sum = Sum + arr[iCnt];
	}
	return Sum;
}

int main()
{
	int arr[] = {10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};
	
	int iSum = AddN(arr,5);
	cout<<"Addition is : "<<iSum<<endl;
	
	float fSum = AddN(brr,4);
	cout<<"Addition is :"<<fSum<<endl;
		
	return 0;
}