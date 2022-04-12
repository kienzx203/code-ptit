#include <stdio.h>
int main()
{
    long long a, b, c, t, e ;
    scanf("%lld", &t);
    while (t--)
    {
        e=0;
        scanf("%lld", &a);
        while (a != 0)
        {
            b = a % 10;
            a = a / 10;
            c = a % 10;
            if (b < c)
            {
                printf("NO\n");
                e = 1;
                break;
            }
        }
        if (e == 0)
            printf("YES\n");
    }
}