#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);

    char x = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i * 2; j <= n * 2 - 2; j += 2)
        {
            printf("%c", x + j);
        }
        printf("\n");
    }
}