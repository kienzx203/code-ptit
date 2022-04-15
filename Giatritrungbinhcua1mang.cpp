#include <stdio.h>
int main()
{
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        s += t;
    }
    printf("%.3f", (float)s / n);
}