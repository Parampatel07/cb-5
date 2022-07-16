#include<stdio.h>
float GetAdd(int a,int b)
{
    float result;
    result=a+b;
    return result;
}
void main()
{
    int num1,num2;
    float answer;
    printf("Enter value for num1");
    scanf("%d",&num1);
    printf("Enter value for num2");
    scanf("%d",&num2);
    answer=GetAdd(num1,num2);
    printf("Value of answer is %.1f",answer);
}