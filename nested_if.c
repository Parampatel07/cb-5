// write a programe to find which triagnle is smaller among given three triagnle findout largest triagnle take hieght and base from user
#include <stdio.h>
void main()
{
    int height1, base1, height2, base2, height3, base3;
    float area1, area2, area3;
    printf("enter value for height 1");
    scanf("%d", &height1);
    printf("Enter value for base 1");
    scanf("%d", &base1);
    printf("Enter value for height 2");
    scanf("%d", &height2);
    printf("Enter value for base 2");
    scanf("%d", &base2);
    printf("Enter value for height 3");
    scanf("%d", &height3);
    printf("enter value for base 3");
    scanf("%d", &base3);

    area1 = height1 * base1 / 2;
    area2 = height2 * base2 / 2;
    area3 = height3 * base3 / 2;

    printf("\narea of 1 triagnle is %f", area1);
    printf("\narea of second triagle is %f", area2);
    printf("\narea of 3 tirangle is %f\n", area3);

    if (area1 == area2 && area2 == area3)
    {
        printf("all are small");
    }
    else
    {
        if (area1 > area2)
        {
            if (area1 > area3)
            {
                printf("1 is greater than all");
            }
            else
            {
                printf("3 is greater than all");
            }
        }
        else
        {
            if (area2 > area3)
            {
                printf("2 is greater than all");
            }
            else
            {
                printf("3 is greater than all");
            }
        }
    }
}