// Q1.Write a program which accept one number and position from user and check whether bit at that position is on or off,If bit is one return TURE otherwise return FALSE
// Input :10  2
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether bit at given position is ON or OFF.
// Input          : Unsigned Integer (UINT), Integer Position (1-based)
// Output         : Boolean (true for ON, false for OFF)
// Author         : Dnyaneshwari  Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
        return false;

    iMask = 1 << (iPos - 1);
    iResult = iNo & iMask;

    if(iResult != 0)
        return true;
    else
        return false;
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter position:\n");
    scanf("%d", &iPos);

    bRet = ChkBit(iValue, iPos);

    if(bRet)
        printf("Bit is ON\n");
    else
        printf("Bit is OFF\n");

    return 0;
}
