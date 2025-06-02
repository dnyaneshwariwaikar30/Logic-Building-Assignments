/*
Q-3 Accept character from user. If it is capital then display all the character from the input characters
till Z. If input charcter is small then print all the characters in reverse order till a. In other cases 
return directly.

Input     : Q
Output    : q   r   s   t   u   v   w   x   y   z

Input     : m
Output    : m   l   k   j   i   h   g   f   d   c   b   a

Input     : 8
Output    : 
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display alphabets till z if capital, if lower display till a.
// Input          : Character
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 2/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 65 && ch <= 90)
    {
        while(ch != 91)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if(ch >= 97 && ch <= 122)
    {
        while(ch != 96)
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return;
    }

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application will display alphabets till z if capital, if lower display till a.
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