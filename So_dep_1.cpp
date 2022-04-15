#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int check = 1;
        char c[10000];
        scanf("%s", &c);
        for (int i = 1; i < strlen(c) / 2; i++)
        {
            if (c[i] != c[strlen(c) - 1 - i])
                check = 0;
        }
        for (int i = 1; i < strlen(c) / 2; i++)
        {
            if (((int)c[i] - 48) % 2 != 0)
                check = 0;
        }
        if (check == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}