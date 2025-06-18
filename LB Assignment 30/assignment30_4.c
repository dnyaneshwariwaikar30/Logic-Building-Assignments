// Q-4: Write a program which checks whether 7th, 8th, and 9th bit is ON or OFF.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether the 7th, 8th, and 9th bits of a given number are ON or OFF.
// Input          : Unsigned Integer (UINT)
// Output         : Boolean (TRUE if all 3 bits are ON, otherwise FALSE)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0;   // 7th (0x40), 8th (0x80), 9th (0x100)
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;  // All bits are ON
    }
    else
    {
        return FALSE; // At least one bit is OFF
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
        printf("7th, 8th, and 9th bits are ON\n");
    }
    else
    {
        printf("Either 7th, 8th, or 9th bit is OFF\n");
    }

    return 0;
}
