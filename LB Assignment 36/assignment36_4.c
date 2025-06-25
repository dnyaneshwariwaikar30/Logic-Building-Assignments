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

void DisplaySmall(PNODE Head)
{
    int iTemp = 0, iDigit = 0, iMin = 0;

    printf("Smallest digits from each element:\n");

    while(Head != NULL)
    {
        iTemp = Head->Data;
        iMin = 9;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            iTemp = iTemp / 10;
        }

        printf("%d\t", iMin);
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
    InsertFirst(&First, 11);

    DisplaySmall(First);

    return 0;
}
