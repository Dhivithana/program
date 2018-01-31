#include<stdio.h>
int main()
{
int i,j,n,temp,a[50];
printf("enter the array value: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("\n Sorted array is is %d",a[i]);
}
return 0;
}
