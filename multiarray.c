// write a programe to print and accpet marks of 5 student from user
#include <stdio.h>
void main()
{
    int student[5][5], count = 0, std_count = 0;

    for (std_count = 0; std_count < 5; std_count++)
    {
        printf("Enter marks for student %d \n", std_count + 1);

        for (count = 0; count < 5; count++)
        {
            printf("Enter marks for subject %d ", count + 1);
            scanf("%d", &student[std_count][count]);
        }
    }
    for(std_count=0;std_count<5;std_count++)
    {
        printf("\nMarks for student %d are \n",std_count+1);
        for (count = 0; count < 5; count++)
        {
            printf("\nMakrs of subject %d are %d", count + 1, student[std_count][count]);
        }
    }
}