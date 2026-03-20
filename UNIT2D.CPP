#include<stdio.h> 
 #include<conio.h> 
 void main()
{
int a[5][5],i,j;
clrscr();
printf("Enter the values of matrix A\n\n");  
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("Enter the values of matrix B\n\n");  
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
printf("\n");
}
getch();
