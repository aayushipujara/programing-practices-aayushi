#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[100],str2[100],str3[100];
	int i=0,j=0;
	clrscr();
	printf("\n Enter First String : ");
	gets(str1);
	printf("\n Enter Second String : ");
	gets(str2);
  while(str1[i]!='\0')
	{
		str3[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]='\0';
	printf("\n The Concatenated String is : ");
	puts(str3);
	getch();

}
	
