#include <stdio.h>
#include <string.h>
long long a[100];
long long s;
int Thuan_nghich(long long k, long long l)
{
    long long Tong = 0;
    for (long long j = 0; j < s; j++)
    {
        if (k / l == 4)
            return 0;
        else
        {
            a[j] = k / l;
            k = k - (k / l) * l;
            l /= 10;
        }
    }
    for (long long j = 0; j < s / 2; j++)
    {
        if (a[j] != a[s - 1 - j])
            return 0;
    }
    for (long long j = 0; j < s; j++)
    {
        Tong += a[j];
    }
    if (Tong % 10 == 0)
        return 1;
    else
        return 0;
}
void Check(long long k)
{
    long long y = 1, x = 9;
    for (long long i = 0; i < k - 1; i++)
    {
        y *= 10;
        x = x * 10 + 9;
    }
    for (long long i = y; i <= x; i++)
    {
        if (Thuan_nghich(i, y) == 1)
            printf("%lld ", i);
    }
}
int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &s);
        Check(s);
        printf("\n");
    }
}