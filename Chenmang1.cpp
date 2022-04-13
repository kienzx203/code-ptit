#include <stdio.h>
int a[10000];
int b[10000];
int main()
{
    int n, m, t;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &b[i]);
    }
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 1; i <=m; i++)
    {
        printf("%d ", b[i]);
    }
    for (int i = t+1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
}