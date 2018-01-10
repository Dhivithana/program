#include<stdio.h>
int main(void)
{
  int n,i,k,sum=0,array[100];
  scanf("%d %d\n",&n,&k);
 for(i=0;i<n;i++) 
     scanf("%d",&array[i]);
 for(i=0;i<k;i++)
     sum=sum+array[i];
 printf("%d",sum);
}
