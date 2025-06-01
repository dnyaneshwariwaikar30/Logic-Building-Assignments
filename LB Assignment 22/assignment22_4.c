/*
Q-4 Accept character from user and check whether it is small case or not(A-Z)
Input     :  g
Output    :  TRUE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkSmall
// Description    : Check charcter is Small case or not.
// Input          : Character
// Output         : bool
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 1/6/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{

    if(ch >= 'a' && ch <= 'z')
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
//This application will accept character from user and check whether it is small case or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    bool bRet = false;
    char ch = '\0';

    printf("Please enter Character : ");
    scanf(" %c",&ch);

    bRet = ChkSmall(ch);

    if(bRet == true)
    {
        printf("Its Small case Character");
    }
    else
    {
        printf("Its not Small case Character");
    }
    
    return 0;
}