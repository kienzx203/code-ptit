#include <stdio.h>
int main()
{
    int a[1000], t, n, s = 0;
    scanf("%d", &t);
    while (t--)
    {
        s = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                s++;
        }
        printf("%d\n", s);
    }
}