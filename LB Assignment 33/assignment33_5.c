//Q.5. Write a program which accepts one number from user and range of positions from user. Toggle all bits from that range.
//Input: 897 9 13
//Output: 879

#include<stdio.h>

typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggleBitRange
// Description    : Toggles all bits in a given range.
// Input          : Unsigned Integer, Start Position, End Position
// Output         : Updated Number after toggling bits
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0, iResult = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter start position: ");
    scanf("%d", &iStart);

    printf("Enter end position: ");
    scanf("%d", &iEnd);

    iResult = ToggleBitRange(iValue, iStart, iEnd);

    printf("Updated number after toggling: %d\n", iResult);

    return 0;
}
