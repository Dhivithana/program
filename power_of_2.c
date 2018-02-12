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
		printf("\n Yes);
	}
	else if(f==1)
	{
		printf("\n No);
	}
	return 0;
}
