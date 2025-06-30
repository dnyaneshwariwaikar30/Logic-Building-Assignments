// Write genric program which accept one value and one number from user. print that value that number of time on screen.

// Input : M	7
//output : M	M	M	M	M	M	M

// Input : 11	3
//output : 11	11	11	

// Input : 3.7	6
//output : 3.7  	3.7		3.7		3.7		3.7		3.7		

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
	T i= 0;
	
	for(i = 0; i < iSize; i++)
	{
		printf("%c\t",value);
	}
}

int main()
{	
	Display('M',7);
	
	//Display(11,3);
	
	//Display(3.7,6);
	
	return 0;
}