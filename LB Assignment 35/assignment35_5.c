#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : SumDigit
// Description    : Displays addition of digits of each node's data.
// Input          : PNODE
// Output         : void
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

void SumDigit(PNODE Head)
{
    int Temp = 0, Sum = 0;

    printf("Sum of digits of each element:\n");

    while(Head != NULL)
    {
        Temp = Head->Data;
        Sum = 0;

        while(Temp != 0)
        {
            Sum += Temp % 10;
            Temp /= 10;
        }

        printf("%d\t", Sum);
        Head = Head->Next;
    }

    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    SumDigit(First);

    return 0;
}
