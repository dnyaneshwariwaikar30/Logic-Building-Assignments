/*
Q-4: Write a program which accepts one number from user and toggle 7th and 10th bit of that number.
     Return modified number.

     Input  : 137
     Output : 713
*/

#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggleBit
// Description    : Toggle the 7th and 10th bits of the number.
// Input          : UINT (Unsigned Integer)
// Output         : UINT (Modified Number)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000240;  // 7th bit = 0x40, 10th bit = 0x200, combined = 0x240

    iNo = iNo ^ iMask;        // Toggle both bits using XOR

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

    iRet = ToggleBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
