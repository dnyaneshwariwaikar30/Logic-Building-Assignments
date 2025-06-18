//Q.5 Write a program which accepts one number from user and toggles contents of first and last nibble of the number. Return modified number.


#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggleBit
// Description    : Toggles the contents of the first and last nibble (4 bits) of the given number.
// Input          : Unsigned Integer (UINT)
// Output         : Modified Unsigned Integer (UINT)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;    // 11110000000000000000000000001111
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
