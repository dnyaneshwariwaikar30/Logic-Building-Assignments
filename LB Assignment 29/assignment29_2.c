//Write a program which accept file name from user and count number of Small characters from that file.

// Input : Demo.txt

//Output : Number of small character are 21

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
									//Count small latter
int CountSmall(char Fname[])
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
            if(Data[i] >= 'a' && Data[i] <= 'z')
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

    iRet = CountSmall(Fname);
    printf("Number of Small characters are : %d\n",iRet);

    return 0;
}