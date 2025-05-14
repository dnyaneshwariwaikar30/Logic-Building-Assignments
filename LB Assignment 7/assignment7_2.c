//Q-2 Accept ammout in us dollar and return its corresponding value in indian currency.
//Consider 1$ as 70 rupees
//Input  : 10
//Output : 700

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DollartoINR
// Description    : Convert Dollare to INR
// Input          : Integer
// Output         : Integer
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 14/5/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollartoINR(int iNo)
{
    int iDollar = 0;
    iDollar = iNo * 70;
    return iDollar;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet ammout in us dollar and return its corresponding value in indian currency.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}