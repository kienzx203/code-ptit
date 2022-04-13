#include <stdio.h>
int a[10000];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                printf("NO\n");
                s = 0;
                break;
            }
        }
        if (s == 1)
        {
            printf("YES\n");
        }
    }
}