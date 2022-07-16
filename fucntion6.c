#include<stdio.h>
int GetAdd()
{
    int a=10,b=20,result;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    result=a+b;
    // printf("value of result is %d",result);
    return result;
}
void main()
{
    int answer;
    answer=GetAdd();
    printf("value of answer is %d",answer);
}