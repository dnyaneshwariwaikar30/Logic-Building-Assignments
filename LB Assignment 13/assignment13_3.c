//Q-3 Accept the number of rows and number of colums form user and display below pattern.
//Input  : iRow = 3     iCol = 5
//Output : 
//         A    A   A   A   A
//         B    B   B   B   B
//         C    C   C   C   C
 
 
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Description    : Display pattern
// Input          : Integer, Integer
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 20/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        ch++;
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is accept the number from user and display pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}