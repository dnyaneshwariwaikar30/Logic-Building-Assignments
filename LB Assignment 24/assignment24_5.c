/*
Q-5 Write a program which accept  string from user and display it inn reverse order.
Input     : "MarvellouS"
Output    : "SuollevraM"
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Reverse
// Description    : Display string in reverse order.
// Input          : Pointer
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 2/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    for(iCnt; iCnt >= 0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and display it in reverse order.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);
    
    return 0;
}