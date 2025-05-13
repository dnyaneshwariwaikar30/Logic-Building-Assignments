//Q-3 Write a program which accpet number from user and display all its non factors.
//Input  : 12
//Output : 5    7   8   9   10  11


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : NonFact
// Description    : Display all its non factors.
// Input          : Integer
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 3/5/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display all its non factors.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);    
    
    return 0;
}