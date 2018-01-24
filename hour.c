#include<stdio.h>
int main()
{
	int minutes,hour,minute;
	printf("\n enter minutes");
	scanf("%d",&minutes);
	hour=minutes/60;
	minute=minutes/1;
	printf("\n %d %d",hour,minutes);
	return 0;
}
