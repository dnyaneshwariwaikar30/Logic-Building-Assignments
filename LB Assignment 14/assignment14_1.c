//Q-1 Accept the number of rows and number of colums from user and display below pattern.
//Input  : iRow = 4     iCol = 4
//Output : 
//          1   2   3   4
//          5   6   7   8
//          9   1   2   3
//          4   5   6   7
 

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

void Pattern(int iRow,int iCol)
{
   int i =0,j=0,iCnt=1;
   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
       {
          if(iCnt>9)
          {
             iCnt=1;
          }
          printf("%d\t",iCnt);
          iCnt++;
       }
       printf("\n");
   }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and coloumns");
    scanf("%d %d",&iValue1,&iValue2 );

    Pattern(iValue1,iValue2);

    return 0;
}