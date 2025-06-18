//Q11. Write a program which accepts one number from user and counts number of ON (1) bits in it without using % and / operator.
//Input: 11
//Output: 3

#include<stdio.h>
typedef unsigned int UINT;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountOne
// Description    : Counts number of ON (1) bits in the given number without using % or / operators.
// Input          : Unsigned Integer (UINT)
// Output         : Integer (Count of 1s)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountOne(UINT iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1) 
        { 
            iCnt++;
        }
        iNo = iNo >> 1;  
    }

    return iCnt;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("Number of ON (1) bits: %d\n", iRet);

    return 0;
}
