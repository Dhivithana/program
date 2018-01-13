#include <stdio.h>
int main(void) {
int n,q,i;
printf("\n enter the first interval");
scanf("%d",&n);
printf("\n enter the second interval");
scanf("%d",&q);
for(i=n;i<=q;i++)
{
if(i%2==0)
{
	
printf("\n the numbers are %d ",i);
}
}
	return 0;
}
