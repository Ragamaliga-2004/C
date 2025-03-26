#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count = 0;
    int len;
    scanf("%[^\n]", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '#')
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("#");
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] != '#')
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}


