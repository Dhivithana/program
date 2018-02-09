#include<stdio.h>
#include<string.h>
int main()
{
char ss[100];
gets(ss);
int n,i;
printf("\n Enter your limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%s",ss);
}
return 0;
}
