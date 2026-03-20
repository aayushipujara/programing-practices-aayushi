#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l;
	char str[25];
	clrscr();
	printf("\nEnter a string:");
	gets(str);
	printf("\n lowercase string= %s",strlwr(str));
	getch();
}
