//Q2. Write a program which accepts two numbers from user and displays positions of common ON bits from those two numbers.
//Input: 10, 15
//Output: 2, 4

#include<stdio.h>

typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CommonBits
// Description    : Displays positions of common ON bits between two numbers.
// Input          : Two Unsigned Integers
// Output         : Printed positions
// Author         : Dnyaneshwari
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CommonBits(UINT iNo1, UINT iNo2) 
{
    UINT iResult = iNo1 & iNo2;  // Bitwise AND to find common ON bits
    int iPos = 1;

    printf("Common ON bit positions: ");
    while(iResult != 0) 
    {
        if((iResult & 1) == 1)
        {
            printf("%d ", iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
    printf("\n");
}

int main() 
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}