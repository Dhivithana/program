#include<stdio.h>
int main()
{
int a[50];
int size,i;
int f=0;
printf("\n enter the size of your array:");
scanf("%d",&size);
printf("\n enter the elements of your array:");
for(i=0;i<=size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=size;i++)
{
if(a[i]>f)
{
f=a[i];
}
}
printf("\n The maximum element is:%d",f);
return 0;
}
