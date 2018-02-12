#include <stdio.h>
#include<string.h>

int main(void) 
{
	char a[20],b[20];
	int a1,b1;
	printf("\n Enter your first string:");
	gets(a);
	printf("\n Ente your second string:");
	gets(b);
	a1=strlen(a);
	b1=strlen(b);
	if(a1>b1 || a1==b1)
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
	
	return 0;
}
