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

void InsertFirst(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (*head == NULL)
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
    while (head != NULL)
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
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
    while (head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Minimum
// Description    : Finds and returns the smallest element in the linked list.
// Input          : PNODE (Pointer to the first node of the list)
// Output         : int (Minimum value)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Minimum(PNODE head)
{
    if (head == NULL)
    {
        return -1; // List is empty
    }

    int Min = head->data;

    while (head != NULL)
    {
        if (Min > head->data)
        {
            Min = head->data;
        }
        head = head->next;
    }
    return Min;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Entry point of the program. Inserts elements into a linked list and returns the
//                  smallest element among them.
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

    InsertFirst(&first, 640);
    InsertFirst(&first, 240);
    InsertFirst(&first,  20);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    // Display(first);  // Optional: Uncomment to display list

    iRet = Minimum(first);

    if (iRet != -1)
    {
        printf("Minimum of all elements from LL is : %d\n", iRet);
    }
    else
    {
        printf("Linked List is empty.\n");
    }

    return 0;
}
