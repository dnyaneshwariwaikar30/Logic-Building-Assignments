#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : InsertFirst
// Description    : Inserts a new node at the beginning of the singly linked list.
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ReverseDigit
// Description    : Reverses a number.
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int ReverseDigit(int iNo)
{
    int iRev = 0;
    while(iNo != 0)
    {
        iRev = iRev * 10 + (iNo % 10);
        iNo = iNo / 10;
    }
    return iRev;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Reverse
// Description    : Displays the reverse of each element of singly linked list.
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Reverse(PNODE Head)
{
    printf("Reversed elements of each node in linked list:\n");

    while(Head != NULL)
    {
        printf("%d\t", ReverseDigit(Head->data));
        Head = Head->next;
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main Function
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Reverse(First);

    return 0;
}
