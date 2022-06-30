// write a programe to print pattern
//  1,3,5,7,9,11,13,15,17...500
#include <stdio.h>
void main()
{
    int number = 1;
    while(number<500)
    {
        printf("%d ", number);
        number = number + 2;
    }
}
