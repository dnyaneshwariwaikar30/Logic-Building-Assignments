/*
Q-1 Accept character from user and check whether it is alphbet or not(A-Z || a-z)
Input     :  F
Output    :  TRUE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkAlpha
// Description    : Check charcter is alphbet or not.
// Input          : Character
// Output         : bool
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 1/6/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkAlpha(char ch)
{

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' )
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept character from user and check whether it is alphbet or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    bool bRet = false;
    char ch = '\0';

    printf("Please enter Character : ");
    scanf(" %c",&ch);

    bRet = ChkAlpha(ch);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    return 0;
}