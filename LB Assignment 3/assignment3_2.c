

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayFactor
// Description    : Print all factors of that number.
// Input          : Integer
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 10/5/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }   
    }
    printf("%d\t",iNo);                     //Every number is there own factor
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept number from user and print all factors of that number. 
// (Next question is for only even)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}