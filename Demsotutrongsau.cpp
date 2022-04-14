#include <stdio.h>
#include <math.h>
#include <string.h>
int i, j, n, m, max1;
char a[2000];
int dem(char a[])
{
    int k = 0;
    int m = strlen(a);
    int j;
    int d = 0;
    a[m] = ' ';
    for (j = 0; j < m; j++)
        if (a[j] != ' ')
            k = 1;
    if (k == 0)
        return 0;
    j = 0;
    while (a[j] == ' ')
    {
        a[j] = '1';
        j++;
    }
    for (j = 0; j < m; j++)
    {
        if (a[j] == ' ' && a[j + 1] != ' ')
            d++;
    }
    return d + 1;
}
int main()
{
    scanf("%d\n", &n);
    for (i = 1; i <= n; i++)
    {
        gets(a);
        max1 = dem(a);
        printf("%d\n", max1);
    }
}