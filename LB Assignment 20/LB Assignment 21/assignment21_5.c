//Q-5 Accept N numbers from user and display summetion of digits of each number.
//Input   :     N : 6 
//              Elements : 8225  665  3   76  953  858
//Output  :     17  17  3   13  17  21


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DigitSum
// Description    : Display summetion of digits of each number.
// Input          : Pointer, Integer
// Output         : -
// Author         : Dnyaneshwar Makarand Waikar
// Date           : 29/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DigitSum(int Arr[], int iLength)
{
    int iNo = 0, iCnt = 0, iRem = 0, iSum = 0;
    for(iCnt= 0;iCnt<iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
       
        while(iNo > 0)
        {
            iRem = iNo % 10;
            iNo = iNo / 10;
            iSum = iSum + iRem;
        }
        
        printf("%d\t",iSum);       
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and display summetion of digits of each number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0, iCnt = 0;
    int *p =NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitSum(p, iSize);

    free(p);

    return 0;
}