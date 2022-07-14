#include<stdio.h>
int Getsum()
{
    int a=10,b=20,result;
    result=a+b;
    return result;
}
void main()
{
    int num1;

    num1=Getsum();
    printf("num1 is %d",num1);
    
}