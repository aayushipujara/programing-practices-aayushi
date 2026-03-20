#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int n;
	char str[25],str2[25];
	clrscr();
	printf("\nEnter string:");
	gets(str);
	printf("\nReversed string is=%s",strrev(str));
	getch();
}
