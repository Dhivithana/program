#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int c=0,i;
printf("\n Enter your string:");
gets(str);
for(i=0;str[i]!=0;i++)
{
if(str[i]==' ')
{
c++;
}
}
printf("\n The number of spaces are%d:",c);
return 0;
}

