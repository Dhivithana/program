#include<stdio.h>
int main()
{
int a,b,num;
printf("\n enter the number to be check for prime");
scanf("%d",&num);
a=num/1;
b=num/num;
if(a==num && b==1)
{
printf("\nit is prime number");
}
else
{
printf("\nit is not a prime number");
}
if(num==num)
{
printf("\nyes");
}
else
{
printf("\nno");
}
return 0;
}
