#include<stdio.h>  
void main()
{int array1[3][3][3], i, j, k;  clrscr();
printf(“\n Enter the elements of the matrix”);
printf(“\n ******************************”);  
for(j=0;j<=2;j++)
{
for(k=0;k<=2;k++)
{
printf(“\n array[%d][ %d][ %d] = ”, i, j, k);
scanf(“%d”, &array1[i][j][k]);
}
}
for(i=0;i<=2;i++)
{ printf(“\n\n”)); 
for(j=0;j<=2;j++)
{
printf(“\n”); 
for(k=0;k<=2;k++) 
printf(“\t	array[%d][%d][%d]	=	%d”,i,j,k,array1[i][j][k]);
}
}
getch();
}
