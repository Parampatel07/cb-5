#include<stdio.h>
void GetAdd(int a,int b)
{
    int result;
    result=a+b;
    printf("Value of result is %d",result);
}
void main()
{
    int num1,num2;

    printf("Enter value for number 1");
    scanf("%d",&num1);
    printf("Enter value for number 2");
    scanf("%d",&num2);

    GetAdd(num2,num1);
}