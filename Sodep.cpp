#include <stdio.h>
#include <string.h>
long long a[100];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int check = 1;
        char c[100];
        scanf("%s", &c);
        for (int i = 1; i < strlen(c) / 2; i++)
        {
            if (c[i] != c[strlen(c) - 1 - i])
                check = 0;
        }
        int k = (int)c[0] - 48;
        int l = (int)c[strlen(c) - 1] - 48;

        if (k * 2 != l && l * 2 != k)
            check = 0;
        if (check == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}