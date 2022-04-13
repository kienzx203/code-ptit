#include <stdio.h>
int a[10000];
int b[10000];
int main()
{
    int k, j = 1;
    scanf("%d", &k);
    while (k--)
    {
        int n, m, t;
        scanf("%d%d%d", &n, &m, &t);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &b[i]);
        }
        printf("Test %d:\n", j);
        for (int i = 1; i <= t; i++)
        {
            printf("%d ", a[i]);
        }
        for (int i = 1; i <= m; i++)
        {
            printf("%d ", b[i]);
        }
        for (int i = t + 1; i <= n; i++)
        {
            printf("%d ", a[i]);
        }
        j++;
        printf("\n");
    }
}