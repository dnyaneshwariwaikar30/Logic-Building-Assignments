/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : FirstOcc
// Description    : Finds the position of the first occurrence of a given element in a singly linked list.
// Input          : PNODE (Pointer to the first node of the list), int (Element to search)
// Output         : int (Position of first occurrence if found, else position after full traversal)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFisrt(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
}



int Count(PNODE head)
{
    int iCount=0;
    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;

}

int FirstOcc(PNODE head, int no)
{
    int iSize = 0;
    iSize = Count(head);

    int i = 0;
    for(i = 1; i <= iSize; i++)
    {
        if(head->data == no)
        {
            break;
        }
        head = head->next;
    }

    return i;
}

int main()
{
    PNODE first = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFisrt(&first,70);
    InsertFisrt(&first,30);
    InsertFisrt(&first,50);
    InsertFisrt(&first,40);
    InsertFisrt(&first,30);
    InsertFisrt(&first,20);
    InsertFisrt(&first,10);


    printf("Enter the the number to be find : \n");
    scanf("%d",&iValue);

    iRet = FirstOcc(first,iValue);

    printf("The first occurance is : %d  \n",iRet);

    return 0;
}