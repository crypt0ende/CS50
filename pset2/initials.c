#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string s = GetString();
    if (s[0] >= 'a' && s[0] <= 'z')
        printf("%c", s[0] - 32);
    else
        printf("%c", s[0]);
    for (int i = 1, len = strlen(s); i < len; i++)
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                printf("%c", s[i + 1] - 32);
            else
                printf("%c", s[i + 1]);
        }
    }
    printf("\n");
}