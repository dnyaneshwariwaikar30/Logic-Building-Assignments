#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : InsertFirst
// Description    : Inserts a new node with the given value at the beginning of the linked list.
// Input          : PPNODE (Address of pointer to the first node), int (Value to insert)
// Output         : void
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFisrt(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Displays the elements of the linked list.
// Input          : PNODE (Pointer to the first node of the list)
// Output         : void
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Count
// Description    : Counts the number of nodes in the linked list.
// Input          : PNODE (Pointer to the first node of the list)
// Output         : int (Total node count)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE head)
{
    int iCount = 0;
    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Description    : Calculates the sum of all elements in the linked list.
// Input          : PNODE (Pointer to the first node of the list)
// Output         : int (Sum of all node values)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Addition(PNODE head)
{
    int Add = 0;

    while(head != NULL)
    {
        Add = Add + head->data;
        head = head->next;
    }

    return Add;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Entry point of the program. Inserts nodes into a linked list and displays the sum
//                  of all elements.
// Input          : void
// Output         : int (Exit status)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFisrt(&first, 40);
    InsertFisrt(&first, 30);
    InsertFisrt(&first, 20);
    InsertFisrt(&first, 10);

    iRet = Addition(first);

    printf("Addition of all elements from LL is : %d\n", iRet);

    return 0;
}
