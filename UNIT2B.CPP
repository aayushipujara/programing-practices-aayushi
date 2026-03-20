#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],i;
	clrscr();
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
