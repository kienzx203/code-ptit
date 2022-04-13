#include <stdio.h>
#include <math.h>
int check(int z)
{
    int c = z % 10;
    z /= 10;
    while (z != 0)
    {
        int b = z % 10;
        if (b <= c)
            return 1;
        c = b;
        z /= 10;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        int dem = 0;
        scanf("%d %d", &a, &b);
        int i;
        for (i = a; i <= b; i++)
        {
            if (check(i) == 0)
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }
}