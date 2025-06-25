#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : InsertFirst
// Description    : Inserts a new node at the beginning of the singly linked list.
// Input          : PPNODE (Address of head pointer), int (value to insert)
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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayPerfect
// Description    : Displays all perfect numbers from the linked list.
// Input          : PNODE (Pointer to head of linked list)
// Output         : void
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayPerfect(PNODE Head)
{
    int i = 0;
    int sum = 0;

    printf("Perfect numbers from linked list are:\n");

    while(Head != NULL)
    {
        sum = 0;

        for(i = 1; i <= (Head->Data / 2); i++)
        {
            if((Head->Data % i) == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == Head->Data)
        {
            printf("%d\t", Head->Data);
        }

        Head = Head->Next;
    }

    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Entry point of the program. Builds a linked list and displays perfect numbers.
// Input          : void
// Output         : int (Exit code)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 6);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPerfect(First);

    return 0;
}
