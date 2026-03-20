#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int n;
	char str[25],str2[25];
	clrscr();
	printf("\nEnter string 1:");
	gets(str);
	printf("\nEnter string 2:");
	gets(str2);
	printf("\nEnter number of characters:");
	scanf("%d",&n);
	printf("\nConcatenated string=%s", strncat(str,str2,n));
	getch();
}
