#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[20],ch;
	clrscr();
	printf("\n Enter String : ");
	gets(str);
	printf("\n Enter Character for Search : ");
	scanf("%c",&ch);

	printf("\n Search Character is %s",strchr(str,ch));

	getch();
}
