///////////////////////////////////////////////////////
//  file name       : Assignment1.c
//  function name   : Divide
//  Description     : Program to divide two numbers
//  Input           : Integer,Integer
//  Output          : Integer
//  Author          : Dnyaneshwari Makarand Waikar
//  Date            : 9/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int Divide (int iNo1,int iNo2)
{
   int iAns = 0 ;

   if(iNo2 == 0 )
   {
       return -1;
   }

   iAns = iNo1 / iNo2 ;

   return iAns;

}
 

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application used to divide two numbers.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is : %d\n" ,iRet);

    return 0;
} 