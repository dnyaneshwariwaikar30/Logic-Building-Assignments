//Q-5 Accept N numbers from user and return product of all odd numbers.
//Input   :     N : 6 
//              Elements : 15  66  3   70  10  88
//Output  :     45


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Product
// Description    : Return product of all odd numbers.
// Input          : Pointer, Integer
// Output         : Integer
// Author         : Dnyaneshwar Makarand Waikar
// Date           : 28/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Product(int Arr[], int iLength)
{
    int iPro = 1;
    int iCnt = 0;
    int AllEven = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)             
        {
            iPro = iPro * Arr[iCnt];
            AllEven = 1;
        }
    }
    if(AllEven == 0)
    {
        return 0;
    }
    else
    {
        return iPro;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return product of all odd numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *p =NULL; 

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p= (int *)malloc(iSize * sizeof(int));

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

    iRet = Product(p, iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}