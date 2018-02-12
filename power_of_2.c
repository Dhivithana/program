#include <stdio.h>

int main(void) 
{
	int num,f=0,t;
	printf("enter the number");
	scanf("%d",&num);
	t=num;
	while(t!=1)
	{
		if(t%2!=0)
		{
			f=1;
			break;
			
		}
		t=t/2;
	}
	if(f==0)
	{
		printf("\n %d is a power of 2",num);
	}
	else if(f==1)
	{
		printf("\n %d is not a power of 2",num);
	}
	return 0;
}
