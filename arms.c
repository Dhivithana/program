#include<stdio.h>
int main()
{]
int res,rerm,x,n1,n2;
printf("\n enter the numbers");
scanf("%d%d",&n1,&n2);
x=num;
while(n1!=0)
{
for(i=n1;i<=n2;i++)
{
rem=n1%10;
res=res+rem*rem*rem;
n1=n1/10;
}
}
if(res==n1)
{
printf("%d",n1);
}
return 0;
}
