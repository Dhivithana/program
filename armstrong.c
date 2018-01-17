#include<stdio.h>
#include<math.h>
int main()
{
int num,res=0,rem,x;
printf("enter the number");
scanf("%d",&num);
x=num;
while(num!=0)
{
rem=num%10;
res+=rem*rem*rem;
num=num/10;
}
if(res==x)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
