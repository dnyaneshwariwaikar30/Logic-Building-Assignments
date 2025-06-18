/*
Q-3: Write a program which accepts one number from user and toggle 7th bit of that number.
     Return modified number.

     Input  : 137
     Output : 201
*/

#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggleBit
// Description    : Toggle the 7th bit of the number.
// Input          : UINT (Unsigned Integer)
// Output         : UINT (Modified Number)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;  // 7th bit = 64 = 0x40

    iNo = iNo ^ iMask;        // Toggle the 7th bit using XOR

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
