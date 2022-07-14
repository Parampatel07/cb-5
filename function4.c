#include <stdio.h>
int GetSum(int a, int b)
{
    int result;
    result = a + b;
    printf("Value of answer is %d\n", result);
    return result;
}
void Add()
{
    int num1, num2, result;
    printf("Enter value for num1");
    scanf("%d", &num1);
    printf("Enter value for num2");
    scanf("%d", &num2);
    result = GetSum(num1, num2);
}
void main()
{
    int num1, num2, result;
    void Add();
}