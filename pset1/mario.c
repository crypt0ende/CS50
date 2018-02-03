#include <stdio.h>
#include <cs50.h>

/*
      # build #
     ## mario ##
    ### tower ###
*/

int main()
{
    int height;
    printf("Height (between 0 and 24): ");
    height = GetInt();
    if ((height > 0) && (height < 24))
    {
        for (int x = 1; x < height + 1; x++)
        {
            for (int p = 0; p < height - x; p++)
                printf(" ");
            for (int p = 0; p < x; p++)
                printf("#");
            printf(" ");
            for (int p = 0; p < x; p++)
                printf("#");
            printf("\n");
        }
    }
    else
        main();
}