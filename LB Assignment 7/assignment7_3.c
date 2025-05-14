//Q-3 Write the code to find even factorial of given numbber.
//Input  : 5
//Output : 8 (4*2)

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : EvenFactoreial
// Description    : Find even factorial
// Input          : Integer
// Output         : Integer
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 14/5/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iFactE = 1;

    if(iNo < 0)
        {
            iNo = - iNo;
        }

   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
        
        if(iCnt % 2 == 0)
        {
            iFactE = iCnt * iFactE;        
        }
   }
   return iFactE;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to find even factorial of given numbber
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}