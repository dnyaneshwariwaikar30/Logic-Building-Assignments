/*
Q-5 Accept character from user and display its ASCII value in decimal, octal and hexadecimal foramt.

Input     : A
Output    : Decimal    65

*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display ASCII value in decimal, octal and hexadecimal foramt.
// Input          : Character
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 2/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{    
    printf("Decimal value : %d\n",ch);
    printf("Octal value : %o\n",ch);
    printf("Hexadecimal value : %x\n",ch);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will display its ASCII value in decimal, octal and hexadecimal foramt
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Please enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}