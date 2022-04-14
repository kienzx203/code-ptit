#include <stdio.h>
int a[1000005];
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int s = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] <= a[j])
                {
                    s = 0;
                }
            }
            if (s == 1)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
}