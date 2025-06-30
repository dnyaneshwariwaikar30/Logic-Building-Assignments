//Write a genric program to multiply two numbers.

#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1,T no2)
{
	T ans;
	ans = no1 + no2;
	return ans;
}

int main()
{	
	int iRet = 0;
	//int No1 = 10, No2 = 20;
	
	iRet = Multiply(10,20);
	cout<<"Multiplication is :" <<iRet<<endl;
	
	//printf("%d",iRet);
	
	//float iNo1 = 10.0, iNo2 = 20.0;
	float fRet = 0.0;
	
	fRet = Multiply(10.2f,20.4f);
	cout<<"Multiplication is:" <<fRet<<endl;
	
	//printf("%f",fRet);
	
	return 0;
}