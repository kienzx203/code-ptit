#include <stdio.h>
long long a[10000];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        a[1]=1;
        a[2]=1;
        for (long long i=3; i<=92; i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%lld\n",a[n]);
    }
}