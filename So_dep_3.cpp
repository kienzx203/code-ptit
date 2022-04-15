#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool icheck[10000];
int sang()
{
    for (int i = 2; i <= 10000; i++)
    {
        icheck[i] = true;
    }
    for (int i = 2; i <= 10000; i++)
    {
        if (icheck[i] == true)
        {
            for (int j = 2 * i; j <= 10000; j += i)
            {
                icheck[j] = false;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    sang();
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
            if (icheck[(int)c[i] - 48] == false)
                check = 0;
        }
        if (check == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}