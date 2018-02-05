#include<stdio.h>
int main()
{
int numbers[50];
int max=0;
int i,j;
printf("\n Enter your 10 numbers:");
for(int i=0;i<=9;i++)
{
scanf("%d",&numbers[i]);
}
for(i=0;i<=9;i++)
{
for(j=i;j<=i+1;j++)
{
if(numbers[i]>max)
max=numbers[i];
}
}
printf("\n The maximum number is:%d",max);
return 0;
}
