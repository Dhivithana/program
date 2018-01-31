#include <stdio.h>

int main(void) {
int a[50],s,i;
printf("\n Enter your size array:");
scanf("%d",&s);
printf("\n Enter the array elements:");
for(i=0;i<=s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=s;i++)
{
printf("\n %d %d ",a[i],i);
}
return 0;
}
