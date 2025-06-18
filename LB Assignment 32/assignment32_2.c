// Q2. Write a program which accept one number and position from user and off that bit. Return modified number.
// // Input :10  2
// Output : 8
#include<stdio.h>

typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OffBit
// Description    : Turns OFF the bit at the given position.
// Input          : Unsigned Integer (UINT), Integer Position
// Output         : Modified Unsigned Integer
// Author         : Dnyaneshwari  Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0;

    if(iPos < 1 || iPos > 32)
        return iNo;

    iMask = ~(1 << (iPos - 1));

    return iNo & iMask;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter position:\n");
    scanf("%d", &iPos);

    iRet = OffBit(iValue, iPos);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
