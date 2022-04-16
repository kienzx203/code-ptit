#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        int k = n - 1;
        int temp = n - 1;
        for (int j = 1; j <= i-1; j++)
        {
            printf("%d ", i + k);
            temp--;
            k += temp;
        }
        printf("\n");
    }
}