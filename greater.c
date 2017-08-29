#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is greater %d,a");
else if(b>c)
printf("b is greater");
else
printf("c is greater");
return 0;
}
