#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],upper_str[100];
	int i=0;
	clrscr();
	printf("\n Enter String : ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
			upper_str[i]=str[i]-32;
		else
			upper_str[i]=str[i];
		i++;
	}
	upper_str[i]='\0';
	printf("\n String Converted int Upper Case is : ");
getch();
}
