/*
Q-5 Write a program which accept the string from user and count number of white spaces.

Input     : "Marvellous"
Output    :  0
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountWhite
// Description    : Count number of capital characters.
// Input          : Pointer
// Output         : Integer
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 2/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iWhite = 0, iCnt = 0;

    if(str[0] == '\0')
    {
        return 0;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            iWhite++;
        }
        iCnt++;
    }
    return iWhite;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and count  number of white spaces.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);
    printf("Total capital letters are : %d",iRet);
    
    return 0;
}