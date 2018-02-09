#include <stdio.h>
#include<string.h>
int main() 
{
char s1[10],s2[10];
int a1,a2,i,j;
scanf("%s",s1);
scanf("%s",s2);
a1=strlen(s1);
a2=strlen(s2);
for(i=0;i<a2;i++)
{
s1[a1]=s2[i];
a1++;
}
printf("%s",s1);
return 0;
}
