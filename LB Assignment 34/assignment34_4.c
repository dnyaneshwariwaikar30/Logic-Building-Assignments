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
// Function Name  : Maximum
// Description    : Finds and returns the maximum element in the linked list.
// Input          : PNODE (Pointer to the first node of the list)
// Output         : int (Maximum node value)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Maximum(PNODE head)
{
    int Max = 0;
    Max = head->data;

    while(head != NULL)
    {
        if(Max < head->data)
        {
            Max = head->data;
        }
        head = head->next;
    }
    return Max;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Entry point of the program. Inserts elements in a linked list and finds the maximum
//                  value among all nodes.
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

    InsertFisrt(&first, 240);
    InsertFisrt(&first, 320);
    InsertFisrt(&first, 230);
    InsertFisrt(&first, 110);

    // Display(first);
    iRet = Maximum(first);

    printf("Maximum of all elements from LL is : %d\n", iRet);

    return 0;
}
