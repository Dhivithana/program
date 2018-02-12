#include<stdio.h>
int main()
{
	int a[10],i,n,f=0,f1;
	printf("\n Enter your limit:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]>f)
		{
		f=a[i];
		}
	}
	printf("\n The largest number is:%d",f);
	f1=f;
	for(i=0;i<=n;i++)
	{
		if(a[i]<f1)
		{
		f1=a[i];
		}
	}
	printf("\n The smallest number is:%d",f1);
return 0;	

}
