#include <stdio.h>
int check(long long x)
{
    int chan = 0, le = 0;
    while (x != 0)
    {
        long long k = x % 10;
        x /= 10;
        if (k % 2 == 0)
            chan++;
        else
            le++;
    }
    if (chan > le)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        check(n);
    }
}
