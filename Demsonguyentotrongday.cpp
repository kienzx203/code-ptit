#include <stdio.h>
#include <stdbool.h>
int c[100005], b[100001];
int sang()
{
    for (int i = 2; i <= 100005; i++)
    {
        c[i] = 1;
    }
    for (int i = 2; i <= 100005; i++)
    {
        if (c[i] == 1)
        {
            for (int j = 2 * i; j <= 100005; j += i)
            {
                c[j] = 0;
            }
        }
    }
}
int main()
{
    int t, j = 1;
    scanf("%d", &t);
    sang();
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        printf("Test %d:\n", j);
        for (int i = 0; i < 100005; i++)
        {
            if (b[i] != 0 && c[i] != 0)
            {
                printf("%d xuat hien %d lan\n", i, b[i]);
                b[i] = 0;
            }
        }
        j++;
    }
}