#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : It is used to Print 5 to 1 number on screen.
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 9/5/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to  Print 5 to 1 number on screen.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}