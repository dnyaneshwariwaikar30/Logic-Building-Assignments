#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : SecMaximum
// Description    : Returns second maximum element from the linked list.
// Input          : PNODE
// Output         : int
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
    int Data;
    struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int SecMaximum(PNODE Head)
{
    int Max1 = 0, Max2 = 0;

    while(Head != NULL)
    {
        if(Head->Data > Max1)
        {
            Max2 = Max1;
            Max1 = Head->Data;
        }
        else if(Head->Data > Max2 && Head->Data != Max1)
        {
            Max2 = Head->Data;
        }

        Head = Head->Next;
    }

    return Max2;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);
    printf("Second maximum element is: %d\n", iRet);

    return 0;
}
