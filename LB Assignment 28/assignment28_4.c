/*
Q-4 Write application which accepts file name from user,
     reads all the data from that file and displays contents on screen.

Input   : Demo.txt  
Output  : File size is 56 bytes.
          
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Description    : Reads and displays content of a file along with file size
// Input          : Demo.txt
// Output         : Displays file content and its size in bytes
// Author         : Dnyaneshwari Makarand Waikar
// Date           : 13/06/25
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Fname[30];
    char Data[1024];
    int fd = 0;
    int iRet = 0;
    int totalSize = 0;

    printf("Enter file name: ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("\nFile Contents:\n");

    while ((iRet = read(fd, Data, sizeof(Data))) > 0)
    {
        write(1, Data, iRet);  // write to stdout
        totalSize += iRet;
    }

    printf("\n\nFile size is %d bytes.\n", totalSize);

    close(fd);

    return 0;
}
