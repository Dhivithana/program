#include <stdio.h>
int main()
{
    int n, i, res = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            res=1;
            break;
        }
    }

    if (res==0)
        printf("%d yes",n);
    else
        printf("%d no",n);
    
    return 0;
}
