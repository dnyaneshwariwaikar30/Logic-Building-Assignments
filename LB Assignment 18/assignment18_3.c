//Q-3 Accept N numbers from user and display all such elements which are even and divisible by 5.
//Input   :     N : 6 
//              Elements : 85  66  3   80  93  88
//Output  :     80 


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display elements which are even and divisible by 5.
// Input          : Pointer, Integer
// Output         : -
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 27/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int Arr[], int iLength)
{
    int iSumEven = 0, iSumOdd = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 2 ==0)             //or we can write Arr[iCnt % 10 == 0]
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and display all such elements which are even and divisible by 5.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0;
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

    Display(p, iSize);

    free(p);

    return 0;
}