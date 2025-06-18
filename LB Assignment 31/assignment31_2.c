/*
Q-2: Write a program which accepts one number from user and OFF 7th and 10th bit of that number.
     Return modified number.

     Input  : 577
     Output : 1
*/

#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OffBit
// Description    : OFF the 7th and 10th bit of the number.
// Input          : UINT (Unsigned Integer)
// Output         : UINT (Modified Number)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000240;  // 7th bit = 0x40 (64), 10th bit = 0x200 (512), combined = 0x240 (576)
    
    if((iNo & iMask) != 0)    // If any of those bits are ON
    {
        iNo = iNo ^ (iNo & iMask); // Turn them OFF
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
