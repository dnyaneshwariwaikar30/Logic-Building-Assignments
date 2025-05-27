//Q-1 Accept N numbers from user and return differnce between sum of even elements and sum of odd elements.
//Input   :     N : 6 
//              Elements : 85  66  3   80  93  88
//Output  :     53  (234 -181)  


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Difference
// Description    : Difference bet Sum of even and sum of odd elemets
// Input          : Pointer, Integer
// Output         : Intefer
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 27/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Difference(int Arr[], int iLength)
{
    int iSumEven = 0, iSumOdd = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    return (iSumEven-iSumOdd);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and return differnce between sum of even and sum of odd elements.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
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

    iRet = Difference(p, iSize);

    printf("Difference is : %d \n",iRet);

    free(p);

    return 0;
}