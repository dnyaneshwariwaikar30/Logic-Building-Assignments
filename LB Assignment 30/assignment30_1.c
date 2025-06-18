// Q-1. Write a program which checks whether the 15th bit is ON or OFF.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether the 15th bit of a given number is ON or OFF.
// Input          : Unsigned Integer (UINT)
// Output         : Boolean (TRUE if 15th bit is ON, otherwise FALSE)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 17/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000;  // 15th bit mask (bit position 14, 0-based)
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;  // 15th bit is ON
    }
    else
    {
        return FALSE; // 15th bit is OFF
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}


