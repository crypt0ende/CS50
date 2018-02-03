#include <cs50.h>
#include <stdio.h>

/*
    Calculates the equivalent number of bottles according to the shower time.
*/

int main()
{
    printf("How long have you been taking a shower?\n");
    int water = GetInt() * 12;
    printf("%i bottles of water you have used.\n", water);
}