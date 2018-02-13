#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

void sort();

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    int key = atoi(argv[1]);
    string s = GetString();
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = 97 + (s[i] - 97 + key) % 26;
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 65 + (s[i] - 65 + key) % 26;
    }
    printf("%s\n", s);
}
