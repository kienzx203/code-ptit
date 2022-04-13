#include <stdio.h>
#include <stdbool.h>
int a[100005];
bool check[100005];
int Sang_nguyen_to()
{

    for (int i = 2; i <= 100005; i++)
    {
        check[i] = true;
    }
    for (int i = 2; i <= 100005; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= 100005; j += i)
            {
                check[j] = false;
            }
        }
    }
}
int main()
{
    int test = 0;
    scanf("%d", &test);
    Sang_nguyen_to();
    while (test--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i <= 100005; i++)
        {
            a[i] = 0;
        }
        for (int i = 2; i <= n; i++)
        {
            if (check[i] == true && check[n - i] == true && a[i] == 0 && a[n - i] == 0)
            {
                printf("%d %d ", i, n - i);
                a[i] = 1;
                a[n - 1] = 1;
            }
        }
        printf("\n");
    }
}