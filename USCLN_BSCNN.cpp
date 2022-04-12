#include <stdio.h>
int main()
{
    long long a, b, m;
    scanf("%lld%lld", &a, &b);
    m = a * b;
    while (a * b != 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    printf("%lld\n", a + b);
    printf("%lld", m / (a + b));
}