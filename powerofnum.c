#include <stdio.h>
int main()
{
    int base, power;

    long long result = 1;

    scanf("%d", &base);

    scanf("%d", &power);

    while (power != 0)
    {
        result *= base;
        --power;
    }

    printf("%lld", result);

    return 0;
}
