#include<stdio.h>
struct student
{
    int rno;
    float weight;
}s1;
void main()
{
    s1.rno=45;
    printf("This is rno of s1 %d",s1.rno);
    scanf("%f",&s1.weight);
    printf("This is weight of s1 %f",s1.weight);
}