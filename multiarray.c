// write a programe to print and accpet marks of 5 student from user
#include <stdio.h>
void main()
{
    int student[5][5], count = 0, std_count = 0, total[5];
    for (std_count = 0; std_count < 5; std_count++)
    {
        printf("Enter marks for student %d \n", std_count + 1);

        for (count = 0; count < 5; count++)
        {
            printf("Enter marks for subject %d ", count + 1);
            scanf("%d", &student[std_count][count]);
        }
    }
    for (std_count = 0; std_count < 5; std_count++)
    {
        printf("\nMarks for student %d are \n", std_count + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nMakrs of subject %d are %d", count + 1, student[std_count][count]);
        }
    }
    for (std_count = 0; std_count < 5; std_count++)
    {
        total[std_count] = 0;
        for (count = 0; count < 5; count++)
        {
            total[std_count] = total[std_count] + student[std_count][count];
        }
    }
    for(count=0;count<5;count++)
    {
        printf("\n value of total for student %d is %d",count+1,total[count]);
    }
}