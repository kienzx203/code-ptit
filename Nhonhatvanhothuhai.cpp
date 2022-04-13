#include <stdio.h>
int a[10000];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
            a[j + 1] = a[j];
        a[j + 1] = temp;
    }
    printf("%d ", a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            printf("%d ", a[i]);
            break;
        }
    }
}