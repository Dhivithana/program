#include<stdio.h>
int main()
{
	int a[10],i,n,avg,sum=0;
	int *p;
	p=&a[0];
	printf("\n Enter your limit:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("\n The total is:%d",sum);
	avg=sum/n;
	printf("\n the average is:%d",avg);
	return 0;
}
	
