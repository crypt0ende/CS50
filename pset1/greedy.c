#include <cs50.h>
#include <stdio.h>

/*
    Program that calculates the minimum number of coins (25, 10, 5, 1) required to give a user change.
*/

int main()
{
    float pay; // Surrender
    printf("How much change is owed? ($)\n");
    pay = GetFloat();
    if (pay >= 0.01)
    {
        pay = pay * 100;
        int num = 0; // Answer
        int t = 1;
        while (t)
        {
            if (pay - 25 > -1)
            {
                num = num + 1;
                pay = pay - 25;
            }
            if ((pay < 25) && (pay - 10 > -1))
            {
                num = num + 1;
                pay = pay - 10;
            }
            if ((pay < 10) && (pay - 5 > -1))
            {
                num = num + 1;
                pay = pay - 5;
            }
            if ((pay - 1 > -1) && (pay < 5))
            {
                num = num + 1;
                pay = pay - 1;
            }
            if (pay < 1)
                t = 0;
        }
        printf("Number of coins needed: %i\n", num);
    }
    else
        main();
}