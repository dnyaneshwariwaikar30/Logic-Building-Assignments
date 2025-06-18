/*
Q-1: Write a program which accepts one number from user and OFF the 7th bit of that number if it is ON.
     Return modified number.

     Input  : 79
     Output : 15
*/

#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OffBit
// Description    : OFF the 7th bit of the number if it is ON.
// Input          : UINT (Unsigned Integer)
// Output         : UINT (Modified Number)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;    // 7th bit mask (64)
    
    if((iNo & iMask) == iMask)  // Check if 7th bit is ON
    {
        iNo = iNo ^ iMask;      // Toggle OFF 7th bit using XOR
    }

    return iNo;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
