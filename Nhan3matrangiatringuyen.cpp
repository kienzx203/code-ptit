#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, p, q, matrantich[10][10], matrantich1[10][10];
    scanf("%d%d%d%d", &m, &n, &p, &q);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            matrantich[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matrantich[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            matrantich1[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                matrantich1[i][j] += matrantich[i][k] * c[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", matrantich1[i][j]);
        }
        printf("\n");
    }
}