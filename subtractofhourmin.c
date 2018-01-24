#include<stdio.h>
int main()
{
int hour,minute,hour1,hour2,minute1,minute2;
scanf("%d %d\t",&hour1,&minute1);
scanf("%d %d\t",&hour2,&minute2);

hour=hour1-hour2;
minute=minute1-minute2;
printf("%d %d",hour,minute);
return 0;
}
