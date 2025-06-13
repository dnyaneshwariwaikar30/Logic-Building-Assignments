/*
Q-2 Write application which accepts file name from user and creates that file.

Input   : Demo.txt  
Output  : File created successfully.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Accepts file name from user and creates the file.
// Input          : Demo.txt
// Output         : File is created successfully or error message
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 13/06/25
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Fname[30];
    int fd = 0;

    printf("Enter file name to create: ");
    scanf("%s", Fname);

    fd = creat(Fname, 0777);  

    if (fd == -1)
    {
        printf("Unable to create the file.\n");
        return -1;
    }

    printf("File created successfully with file descriptor %d.\n", fd);

    close(fd);

    return 0;
}

