#include <stdio.h>
#include <stdbool.h>
int a[10000];
int main()
{
    int t;
    scanf("%d", &t);
    int N = 1000;
    bool check[N + 1];
    for (int i = 2; i <= N; i++)
    {
        check[i] = true;
    }
    for (int i = 2; i <= N; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                check[j] = false;
            }
        }
    }
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (check[a[i]]==true)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
}