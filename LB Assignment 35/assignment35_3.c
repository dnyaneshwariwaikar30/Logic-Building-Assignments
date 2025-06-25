#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : AdditionEven
// Description    : Returns the addition of all even elements from the linked list.
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

int AdditionEven(PNODE Head)
{
    int Sum = 0;
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            Sum += Head->Data;
        }
        Head = Head->Next;
    }
    return Sum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);

    printf("Addition of even elements is: %d\n", iRet);

    return 0;
}
