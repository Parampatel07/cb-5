#include <stdio.h>
void main()
{
    int astrik = 0, s = 0, r = 0;

    for (astrik = 0; astrik < 7; astrik++)
    {
        printf("*");
    }
    printf("\n");
    printf("*");

    for (r = 4; r > 0; r--)
    {
        for (s = 0; s < r; s++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
        printf("*");
    }
}