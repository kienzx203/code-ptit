#include <stdio.h>
int main()
{
    int t, j = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[100001] ;
        for (int i = 0; i <100001;i++)
        {
            b[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        printf("Test %d:\n", j);
        for (int i = 0; i < n; i++)
        {
            if(b[a[i]]!=0)
            {
                printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
                b[a[i]]=0;
            }
        }
        j++;
    }
}