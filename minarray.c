#include<stdio.h>
int main()
{
int a[50];
int size,i,max,min;
int x=0;
printf("\n enter the size of your array:");
scanf("%d",&size);
printf("\n enter the elements of your array:");
for(i=0;i<=size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=size;i++)
{
if(a[i]<x)
{
x=a[i];
max=x;
}
}
for(i=0;i<=size;i++)
{
if(a[i]<max)
{
min=a[i];
max=min;
}
}
printf("\n The maximum element is:%d",min);
return 0;
}
