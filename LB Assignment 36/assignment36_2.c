#include<stdio.h>
#include<stdlib.h>

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

void DisplayPalindrome(PNODE Head)
{
    int iDigit = 0, iTemp = 0, iRev = 0;

    printf("Palindrome elements are:\n");

    while(Head != NULL)
    {
        iTemp = Head->Data;
        int iNo = iTemp;
        iRev = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = (iRev * 10) + iDigit;
            iTemp = iTemp / 10;
        }

        if(iRev == iNo)
        {
            printf("%d\t", iNo);
        }

        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPalindrome(First);

    return 0;
}
