/*Write a C Program which copies the contents of one file to another file. The names of the
files should be passed to the program as command line arguments. For example
MyFileCopier.exe file1.c file2.c*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	//file pointer
	FILE *f1,*f2;
	char ch;

	//if argc is not 3, then exit
	if(argc!=3)
	{
		printf("\n error");
	}
	else
	{	
		//open the files, read / write
		
		f1 = fopen(argv[1], "r");
		f2 = fopen(argv[2], "w");
		
		//when there is no files to open
		if(f1==NULL || f2==NULL)
		{
			printf("\n unable to open files ");	
		}
		else
		{
			//when not end of file
			
			while((ch=fgetc(f1))!=EOF)
			{
				fputc(ch,f2);
			}
			
			printf("\n File Copied ");
		}
		
		//close the files
		fclose(f1);
		fclose(f2);
	}

}
