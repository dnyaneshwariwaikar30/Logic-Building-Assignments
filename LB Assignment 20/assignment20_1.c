//Q-1 Accept N numbers from user and accept one another numbers as No, check whether No is present or not.
//Input   :     N : 6 
//              NO: 66
//              Elements : 85  66  3   66  93  88
//Output  :     TRUE


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Check
// Description    : Checks whether No is present or not.
// Input          : Pointer, Integer, Integer
// Output         : BOOL
// Author         : Dnyaneshwar Makarand Waikar
// Date           : 28/5/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool Check(int Arr[], int iLength, int iNo)
{
    bool bCheck = false;
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
        return false;
    }
    else
    {
        return true;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and one anather numbers as No, check whether No is present or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;   
    bool bRet = false;
    int *p=NULL; 

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

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    free(p);

    return 0;
}