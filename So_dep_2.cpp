#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int check = 1, s = 0;
        char c[10000];
        scanf("%s", &c);
        for (int i = 0; i < strlen(c) / 2; i++)
        {
            if (c[i] != c[strlen(c) - 1 - i])
                check = 0;
        }
        for (int i = 0; i < strlen(c); i++)
        {
            s += (int)c[i] - 48;
        }
        if (check == 1 && s % 10 == 0 && c[0] == '8' && c[strlen(c) - 1] == '8')
            printf("YES\n");
        else
            printf("NO\n");
    }
}