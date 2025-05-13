//Q-3 Write the program to find factorial of given number.
//Input  : 5
//Output : 120 


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Factorial
// Description    : Finds factorial of given number
// Input          : Integer
// Output         : Integer
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 13/5/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;          //smallest number 0 has factorial of 1 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
   return iFact;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and find its factorial.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}