#include <stdio.h>
#include <math.h>
long long a[100];
int main()
{
    int test = 0;
    scanf("%d", &test);
    while (test--)
    {
        long long n, check = 1, check1 = 0, s = 0;
        scanf("%lld", &n);
        long long k = log10(n) + 1;
        for (long long i = k - 1; i >= 0; i--)
        {
            a[i] = n % 10;
            n /= 10;
        }
        for (long long i = 0; i < k; i++)
        {
            if (a[i] == 1)
                a[i] = 1;
            else if (a[i] == 0 || a[i] == 9 || a[i] == 8)
            {
                a[i] = 0;
                s++;
            }
            else
            {
                printf("INVALID\n");
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            if (k > 1)
            {
                for (long long i = 0; i < k; i++)
                {
                    if (a[i] != 0)
                    {
                        printf("%lld", a[i]);
                        check1 = 1;
                    }
                    else if (check1 == 1)
                    {
                        printf("%lld", a[i]);
                    }
                }
                if (s == k)
                    printf("INVALID\n");
            }
            if (k == 1)
            {
                if (a[0] == 1)
                    printf("1\n");
                else if (a[0] == 0 || a[0] == 9 || a[0] == 8)
                    printf("0\n");
            }
            else if (s != k)
                printf("\n");
        }
    }
}