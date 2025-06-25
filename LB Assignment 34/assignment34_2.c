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
        printf("| %d |->",head->data);
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
// Function Name  : LastOcc
// Description    : Finds the position of the last occurrence of a given element in the linked list.
// Input          : PNODE (Pointer to the first node of the list), int (Element to search)
// Output         : int (Position of last occurrence if found, else 0)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int LastOcc(PNODE head, int no)
{
    int iSize = 0;
    iSize = Count(head);
    int LastPos = 0;

    int i = 0;
    for(i = 1; i <= iSize; i++)
    {
        if(head->data == no)
        {
            LastPos = i;
        }
        head = head->next;
    }

    return LastPos;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Entry point of the program. Demonstrates the insertion of nodes in a linked list
//                  and finds the last occurrence of a user-specified value.
// Input          : void
// Output         : int (Exit status)
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 25/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE first = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFisrt(&first,70);
    InsertFisrt(&first,30);
    InsertFisrt(&first,50);
    InsertFisrt(&first,40);
    InsertFisrt(&first,30);
    InsertFisrt(&first,20);
    InsertFisrt(&first,10);

    printf("Enter the the number to be find : \n");
    scanf("%d", &iValue);
    
    iRet = LastOcc(first, iValue);

    printf("The last occurance is : %d  \n", iRet);

    return 0;
}
