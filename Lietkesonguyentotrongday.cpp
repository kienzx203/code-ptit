#include <stdio.h>
#include <stdbool.h>
int c[100005];
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
    sang();
    int n;
    scanf("%d", &n);
    int a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (c[a[i]] == 1 )
        {
            s++;
        }
    }
    printf("%d ", s);
    for (int i = 0; i < n; i++)
    {
        if (c[a[i]] == 1 )
        {
            printf("%d ", a[i]);
        }
    }
}