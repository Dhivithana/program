#include<stdio.h>
#include<string.h>
int main()
{
int i,c=0;
char a[50];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' '&&a[i]!='\n')
{
c++;
}
}
printf("%d",c);
return 0;
}
