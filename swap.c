#include<stdio.h>
int main()
{
int a,temp,b;
printf("\n enter two numbers:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n The swapped result is:(%d,%d)",a,b);
return 0;
}
