#include <stdio.h>
#include<string.h>
int main(void) {
char a[100];
gets(a);
int i,c=0;
printf("\n enter your string:");
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
c++;
}
}
printf("\n The numeric numbers are:%d",c);
return 0;
}
