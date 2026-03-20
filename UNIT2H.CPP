#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],lwr_str[100];
	int i=0;
	clrscr();
	printf("\nEnter string:");
	gets(str);
	while(str[i]!='\0')
while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			lwr_str[i]=str[i]+32;
		}
		else
		{
			lwr_str[i]=str[i];
		}
		i++;
	}
	lwr_str[i]='\0';
	printf("\n\nString converted into lowercase is:");
	puts(lwr_str);
	getch();
}
