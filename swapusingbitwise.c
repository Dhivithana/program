#include<stdio.h>
int main()
{
int a,b;
printf("\n enter two numbers:");
scanf("%d%d",&a,&b);
printf("\n Numbers before swap(%d,%d):",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n The swapped result is:(%d,%d)",a,b);
return 0;
}
