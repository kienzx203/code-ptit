#include <stdio.h>
int main()
{

    int n, m, a[100][100], t, k = 1;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Test %d:\n", k);
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        k++;
    }
}