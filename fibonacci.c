#include <stdio.h>
int main(void) {
int b=1,a=0,n,temp;
printf("\n Enter the number for fibonacci series:");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
printf("%d",a);
temp=a+b;
a=b;
b=temp;
}
return 0;
}
