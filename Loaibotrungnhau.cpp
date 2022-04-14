#include <stdio.h>
int a[10005], b[10005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (b[a[i]] == 0)
        {
            printf("%d ", a[i]);
            b[a[i]]++;
        }
    }
}