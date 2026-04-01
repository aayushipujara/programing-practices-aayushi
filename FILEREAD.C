#include <conio.h>
#include <string.h>
#include <stdio.h>

void main()
{ FILE *fp;
char name[100];
fp=fopen("myfile.txt","r");

fgets(name,100,fp);
printf("%s",name);
fclose(fp);
getch();
}