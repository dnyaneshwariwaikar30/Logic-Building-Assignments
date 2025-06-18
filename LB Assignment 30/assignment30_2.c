//  Q-2. Write a program which checks whether 5th and 18th bit is ON or OFF.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether the 5th and 18th bits of a given number are ON or OFF.
// Input          : Unsigned Integer (UINT)
// Output         : Boolean (TRUE if both bits are ON, otherwise FALSE)
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
    UINT iMask = 0x00040010;  // 5th bit (0x10), 18th bit (0x40000)
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
        printf("Both 5th and 18th bits are ON\n");
    }
    else
    {
        printf("Either 5th or 18th bit is OFF\n");
    }

    return 0;
}
