#include <stdio.h>
int main()
{
    int n, t, s;
    scanf("%d", &n);
    while (n--)
    {
        s = 0;
        scanf("%d", &t);
        while (t != 0)
        {
            s = s + t % 10;
            t = t / 10;
        }
        if (s % 10 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}