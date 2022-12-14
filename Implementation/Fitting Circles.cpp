#include<stdio.h>

int main()

{

    int t = 0;

    long long int a = 0, b = 0;

    scanf("%d", &t);

    while(t--)

    {

        scanf("%lld %lld", &a, &b);

        printf("%lld\n", (a>b)?a/b:b/a);

    }

    return 0;

}