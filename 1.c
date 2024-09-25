#include <stdio.h>
void main()
{
    int i = 1, j = 1;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = i; j >= 1; j--)

    //     {
    //         printf(" %d ", j);
    //     }
    //     printf("\n");
    // }

    // for (i = 5; i >= 1; i--)
    // {
    //     for (j = i; j <= 5; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // for (i = 5; i >= 1; i--)
    // { // Loop for each row
    //     for (j = 1; j <= i; j++)
    //     { // Loop to print numbers in a row
    //         printf("%d ", i);
    //     }
    //     printf("\n"); // Move to the next line after each row
    // }

    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 5; j >= i; j--)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // for (i = 5; i >= 1; i--)
    // {

    //     for (j = 1; j <= i; j++)
    //     {

    //         printf("%d", j % 2);
    //     }
    //     printf("\n");
    // }

    // for (i = 0; i < 5; i++)
    // {

    //     for (j = i; j >= 0; j--)
    //     {
    //         printf("%c", 'A' + j);
    //     }
    //     printf("\n");
    // }

    int num = 1;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", num);
            num += 1;
        }
        printf("\n");
    }
}
