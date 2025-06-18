//Q.4. Write a program which accepts one number, two positions from user and checks whether bit at first or bit at second position is ON or OFF.
//Input: 10 3 7
//Output: TRUE

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks if either bit at given two positions is ON.
// Input          : Unsigned Integer, Position 1, Position 2
// Output         : TRUE or FALSE
// Author         : Dnyaneshwari
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);
    UINT iResult = iNo & (iMask1 | iMask2);

    return (iResult != 0) ? TRUE : FALSE;
}

int main()
{
    UINT iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter first position: ");
    scanf("%d", &iPos1);

    printf("Enter second position: ");
    scanf("%d", &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
