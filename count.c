#include <stdio.h>
int main()
{
    long long num;
    int co= 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    while(num<0)
    {
       
        n /= 10;
        ++co;
    }

    printf("Number of digits: %d", co);
}
