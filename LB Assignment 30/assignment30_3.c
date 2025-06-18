//Q-3: Write a program which checks whether 7th, 15th, 21st and 28th bit is ON or OFF.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether the 7th, 15th, 21st, and 28th bits of a given number are ON or OFF.
// Input          : Unsigned Integer (UINT)
// Output         : Boolean (TRUE if all bits are ON, otherwise FALSE)
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
    UINT iMask = 0x08104040;  // 7th (0x40), 15th (0x4000), 21st (0x100000), 28th (0x08000000)
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
        printf("7th, 15th, 21st, and 28th bits are ON.\n");
    }
    else
    {
        printf("Either 7th, 15th, 21st, or 28th bit is OFF.\n");
    }

    return 0;
}
