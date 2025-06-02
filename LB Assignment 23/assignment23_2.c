/*
Q-2 Accept character from user. If character is small display its corresponding capital character,
and if it small then display its corresponding capital. In other cases display as it is.

Input     : Q
Output    : q

Input     : m
Output    : M

Input     : 4
Output    : 4

Input     : %
Output    : %
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayASCII
// Description    : Display in lower case if capital and if lower display in capital case.
// Input          : Character
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 2/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 65 && ch<= 90)
    {
        ch= ch+ 32;
        printf("Output is : %c\n",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        ch= ch- 32;
        printf("Output is : %c\n",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application will Display in lower case if capital and if lower display in capital case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Please enter the character : \n");
    scanf("%c",&ch);

    Display(ch);
    
    return 0;
}