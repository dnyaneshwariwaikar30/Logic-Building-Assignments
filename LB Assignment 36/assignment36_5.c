#include<stdio.h>
#include<stdlib.h>

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

void DisplayLarge(PNODE Head)
{
    int iTemp = 0, iDigit = 0, iMax = 0;

    printf("Largest digits from each element:\n");

    while(Head != NULL)
    {
        iTemp = Head->Data;
        iMax = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iTemp = iTemp / 10;
        }

        printf("%d\t", iMax);
        Head = Head->Next;
    }

    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 111);

    DisplayLarge(First);

    return 0;
}
