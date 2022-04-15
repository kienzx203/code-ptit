#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char p[100];
void doAction(char *src, int pos, int len)
{
    int size = strlen(src);
    for (int i = pos; i <= size - len; i++)
    {
        src[i] = src[i + len + 1];
    }
}

void removeStr(char *src)
{
    int size = strlen(src), k = 0;
    for (int i = 0; i < size; i++)
    {
        if (src[i] != ' ')
        {
            p[k] = src[i];
            k++;
        }
        else
        {
            int len = k;
            p[k] = '\0';
            for (int j = i + 1; src[j] != '\0'; j++)
            {
                if (strstr(&src[j], p) == &src[j])
                {
                    doAction(src, j, len);
                    j--;
                }
            }
            for (int x = 0; x < k; x++)
            {
                p[x] = '\000';
            }
            k = 0;
            size = strlen(src);
        }
    }
}

int main()
{
    char input[1000];
    fgets(input, 999, stdin);
    int size = strlen(input);
    if (size > 0)
    {
        input[size - 1] = '\0';
    }
    removeStr(input);
    size = strlen(input);
    int j = 0;
    while (input[j] == ' ')
    {
        j++;
    }
    for (int i = j; i < size; i++)
    {
        if (input[i] == ' ' && input[i + 1] == ' ')
        {
            continue;
        }
        else
            printf("%c", input[i]);
    }
    return 0;
}