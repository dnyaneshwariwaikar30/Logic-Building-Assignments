//Q-5: Write a program which checks whether 1st and 32nd bits are ON or OFF

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether 1st and 32nd bits of a number are ON or OFF.
// Input          : Unsigned Integer (UINT)
// Output         : Boolean (TRUE if both bits are ON, otherwise FALSE)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;  // Mask for 1st and 32nd bit
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;  // Both bits are ON
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
        printf("1st and 32nd bits are ON.\n");
    }
    else
    {
        printf("Either 1st or 32nd bit is OFF.\n");
    }

    return 0;
}
