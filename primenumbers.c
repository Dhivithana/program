#include <stdio.h>
int main()
{
int x, y, i, z;
scanf("%d %d", &x, &y);
while (x < y)
{
z = 0;
for(i = 2; i <= x/2; ++i)
{
if(x % i == 0)
{
z = 1;
break;
}
}
if (z == 0)
printf("%d ", x);
++x;
}
return 0
}  
