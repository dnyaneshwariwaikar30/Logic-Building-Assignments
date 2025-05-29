//Q-2 Accept N numbers from user and accept one another numbers as No, return index of first occurrence of that No.
//Input   :     N : 6 
//              NO: 66
//              Elements : 85  66  3   66  93  88
//Output  :     1


#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : FirstOcc
// Description    : Return index of first occurrence of that No.
// Input          : Pointer, Integer, Integer
// Output         : Integer
// Author         : Dnyaneshwar Makarand Waikar
// Date           : 28/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)             
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and one anather numbers as No,return index of first occurrence of that No.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iValue = 0, iRet = 0;
    int *p =NULL; 

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurance of the number is %d ",iRet);
    }
    free(p);

    return 0;
}