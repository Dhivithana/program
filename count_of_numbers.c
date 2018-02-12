#include<stdio.h>
int main()
{
	int a[10],i,c=0,n;
	printf("\n enter your limit:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		c++;
	}
	printf("\n The count is:%d",c);
	return 0;
}
