// write a program to print following pattern
// 1 4 9 16 25 ........ 1000
#include <stdio.h>
void main()
{
    int number = 1, answer;

    do
    {
        answer = number * number;
        printf("%d ,", answer);
        number++;
    }while(answer<961);
}