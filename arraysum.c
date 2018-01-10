#include<stdio.h>
void main()
{
int n,k,array[10],i,sum=0;
printf("enter two numbers");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&array[i]);
}
if(n>k)
{
for(i=1;i<=k;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
else
{
printf("not valid");
}
}
