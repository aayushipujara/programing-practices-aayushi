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
	l=strlen(str);
	printf("\n length of the string is %d",l);
	getch();
}
