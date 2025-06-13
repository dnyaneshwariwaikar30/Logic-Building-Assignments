//Write a program which accept file name from user and one count from user and read that number of charater from starting position.

// Input : Demo.txt			12

//Output : Dislpay first 12 character from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>
						
int main()
{
	char Fname[30];
	int fd = 0;
	char Data[10];
	
	printf("Enter the file name \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	//0	starting point
	//1	Curruent poition
	//2	End poisition
	
	lseek(fd,0,0);				
	
	read(fd,Data,12);		
	write(1,Data,12);
	
	return 0;
}