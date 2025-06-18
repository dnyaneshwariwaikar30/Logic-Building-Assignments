//Q.3. Write a program which accepts one number from user and checks whether 9th or 12th bit is ON or OFF.
//Input: 257
//Output: TRUE

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks if either 9th or 12th bit is ON.
// Input          : Unsigned Integer
// Output         : TRUE or FALSE
// Author         : Dnyaneshwari
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkBit(UINT iNo) 
{
    UINT iMask = 0x00000900;  // 9th bit = 1<<8 (0x100), 12th bit = 1<<11 (0x800), combined = 0x900

    if((iNo & iMask) != 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main() 
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE) 
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}
