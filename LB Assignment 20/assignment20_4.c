//Q-4 Accept N numbers from user and accept range,Display all elements from that range.
//Input   :     N : 6 
//              Start: 60
//              End  : 90
//              Elements : 85  66  3   76  93  88
//Output  :     66 76 88


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Range
// Description    : Display all elements from range
// Input          : Pointer, Integer, Integer,Integer
// Output         : -
// Author         : Dnyaneshwar Makarand Waikar
// Date           : 28/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCheck = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] <= iEnd && Arr[iCnt]>= iStart)             
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and accept range,Display all elements from that range
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p =NULL; 

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the Staring point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point : \n");
    scanf("%d",&iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    return 0;
}