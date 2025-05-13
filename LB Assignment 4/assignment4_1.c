//Q-1 Write a program which accpet number from user and display its multiplication of factors.
//Input  : 12
//Output : 144


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : MultiFact
// Description    : Get multiplication of factors.
// Input          : Integer
// Output         : Integer
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 13/5/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iCnt * iMulti;
        }
    }
    return iMulti;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display its multiplication of factors.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);
    
    return 0;
}