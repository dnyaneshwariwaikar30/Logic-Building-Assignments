//Write a program which accept file name from user and count number of white spaces from that file.

// Input : Demo.txt

//Output : Number of white spaces are 13

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
									//Count white space
int CountWhite(char Fname[])
{
    int fd = 0, iRet = 0, i =0,iCnt = 0;
    char Data[1024];

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i< iRet; i++)
        {
            if(Data[i] == ' ')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char Fname[30];
    int iRet = 0;

    printf("Enter file name to open :\n");
    scanf("%s",Fname);

    iRet = CountWhite(Fname);
    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}