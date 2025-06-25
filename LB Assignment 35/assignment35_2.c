#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : InsertFirst
// Description    : Inserts a node at the beginning of the singly linear linked list.
// Input          : PPNODE, int
// Output         : void
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node
{
    int Data;
    struct node *Next;
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayPrime
// Description    : Displays all prime numbers from the linked list.
// Input          : PNODE
// Output         : void
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayPrime(PNODE Head)
{
    int i = 0, cnt = 0;

    printf("Prime numbers from linked list are:\n");

    while (Head != NULL)
    {
        cnt = 0;
        for(i = 1; i <= Head->Data; i++)
        {
            if(Head->Data % i == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            printf("%d\t", Head->Data);
        }
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}
