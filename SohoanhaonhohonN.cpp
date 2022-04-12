#include <stdio.h>
#include <math.h>
int a[1000000];
void sang()
{
    a[1] = 1;
    for (int i = 1; i * 2 <= 1e6; i++)
    {
        for (int j = i * 2; j <= 1e6; j += i)
        {
            a[j] += i;
        }
    }
}
int main()
{
    sang();
    int t;
    scanf("%d", &t);
    for (int i = 2; i < t; i++)
    {
        if (a[i] == i)
        {
            printf("%d ", a[i]);
        }
    }
}