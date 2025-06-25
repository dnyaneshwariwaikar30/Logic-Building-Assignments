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

void DisplayProduct(PNODE Head)
{
    int iDigit = 0, iTemp = 0, iProd = 1;

    printf("Product of digits (excluding 0):\n");

    while(Head != NULL)
    {
        iTemp = Head->Data;
        iProd = 1;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit != 0)
            {
                iProd *= iDigit;
            }
            iTemp /= 10;
        }

        printf("%d\t", iProd);
        Head = Head->Next;
    }

    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayProduct(First);

    return 0;
}
