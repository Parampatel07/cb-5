#include <stdio.h>
void main()
{
    int s = 0, t,q,sq=57;

    for (s = 0; s < 58; s++)
    {
        printf(" ");
    }
    printf("*");
    printf(" ");
    printf("\n");
    for(q=2;q<60;q++)
    {
        for (s = 0; s < sq; s++)
        {
            printf(" ");
        }
        for (t = 0; t < q; t++)
        {
            printf("* ");
        }
        printf("\n");
        sq--;
    }
}