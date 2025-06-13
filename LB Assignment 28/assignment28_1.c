/*
Q-1 Write application which accept file name from user and open the file in read mode.

Input     : Demo.txt
Output    : File opended successfully.

*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Accepts file name from user and opens the file in read mode.
// Input          : Demo.txt
// Output         : File opended successfully
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 12/6/25
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    char filename[100];
    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
    } else {
        printf("File opened successfully.\n");
        fclose(fp);
    }

    return 0;
}