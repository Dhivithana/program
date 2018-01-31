#include<stdio.h>
int main()
{
int i,j,num,temp,a[10];
printf("\n Enter the array size: ");
scanf("%d",&num);
printf("\n Enter the array elements:");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num-1;i++)
{
for(j=i;j<num;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("median element is %d",a[num/2]);
return 0;
}
