#include <stdio.h>
int a[10000];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s, tong = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            s = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[i] >= a[j])
                {
                    s++;
                }
            }
            if (s == i)
                tong++;
        }
        printf("%d\n", tong);
    }
}