#include<stdio.h>  #include<conio.h>  void main()
{
int i=0, n, arr[20];  clrscr();
printf(“\n Enter the number of elements : “);  scanf(“%d”, &n);

for(i=0;i<n;i++)
{
printf(“\n Arr[%d] = “, i);
scanf(“%d”,&num[i]);
}
printf(“\n The array elements are “);
for(i=0;i<n;i++)
printf(“Arr[%d] = %d\t”, i, arr[i]);
getch();
}
