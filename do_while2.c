// write a programe to find power and exponent
#include <stdio.h>
void main()
{
    int exponent = 0, base = 0, answer=1,count=0;

    printf("Enter value for base");
    scanf("%d", &base);
    printf("Enter value for exponent");
    scanf("%d", &exponent);

    do
    {
        answer = answer * base;
        count++;
    }while(count<exponent);
    printf("%d is your answer",answer);
}