

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

void sort();

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error| Where is argument?\n");
        return 1;
    }
    else
    {
        for (int i = 0, len = strlen(argv[1]); i < len; i++)
            if ((argv[1][i] < 'a' || argv[1][i] > 'z') && (argv[1][i] < 'A' || argv[1][i] > 'Z'))
            {
                printf("Error| Numbers are not allowed in argument.\n");
                return 1;
            }
    }

    string key = argv[1];
    int key_len = strlen(key), key_counter = 0;
    string s = GetString();
    char buf = key[key_counter % key_len];

    for (int i = 0, len = strlen(s); i < len; i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = 97 + (s[i] - 97 + ((buf >= 'a' && buf <= 'z') ? (buf - 97) : (buf - 65))) % 26;
            ++key_counter;
            buf = key[key_counter % key_len];
            ;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = 65 + (s[i] - 65 + ((buf >= 'a' && buf <= 'z') ? (buf - 97) : (buf - 65))) % 26;
            ++key_counter;
            buf = key[key_counter % key_len];
            ;
        }
    }
    printf("%s\n", s);
}
