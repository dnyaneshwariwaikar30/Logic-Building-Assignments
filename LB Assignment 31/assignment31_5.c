/*
Q-4: Write a program which accepts one number from user and on its first 4 bits .
     Return modified number.

     Input  : 73
     Output : 79
*/

#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OnBit
// Description    : Turns ON first 4 bits of a given number.
// Input          : Unsigned Integer (UINT)
// Output         : Modified Unsigned Integer (UINT)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OnBit(UINT iNo) 
{
    UINT iMask = 0x0000000F;   // 0000 0000 0000 0000 0000 0000 0000 1111
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = OnBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
