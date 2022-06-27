// write a programe to print user given number in words 
// 45- four five
// 58 - five eight

#include<stdio.h>
void main()
{
    int number=0,first_num,second_num;
    printf("Enter value for number");
    scanf("%d",&number);
    first_num=number/10;
    second_num=number%10;
    // printf("first num is %d and Second number is %d",first_num,second_num);
    if (first_num==1)
    {
        printf("One");
    }
    else if (first_num==2)
    {
        printf("Two");
    }
    else if (first_num==3)
    {
        printf("Three");
    }
    else if (first_num==4)
    {
        printf("four");
    }
    else if (first_num==5)
    {
        printf("five");
    }
    else if(first_num==6)
    {
        printf("Six");
    }
    else if(first_num==7)
    {
        printf("seven");
    }

    else if(first_num==8)
    {
        printf("eight");
    }

    else if(first_num==9)
    {
        printf("nine");
    }
    else if(first_num==0)
    {
        printf("zero");
    }    
    if (second_num==1)
    {
        printf("One");
    }
    else if (second_num==2)
    {
        printf("Two");
    }
    else if (second_num==3)
    {
        printf("Three");
    }
    else if (second_num==4)
    {
        printf("four");
    }
    else if (second_num==5)
    {
        printf("five");
    }
    else if(second_num==6)
    {
        printf("Six");
    }
    else if(second_num==7)
    {
        printf("seven");
    }
    else if(second_num==8)
    {
        printf("eight");
    }
    else if(second_num==9)
    {
        printf("nine");
    }
    else if(second_num==0)
    {
        printf("zero");
    }    
}