#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    int total_percentage;
    printf("Enter the marks of subject1:");
    scanf("%d", &sub1);
    printf("Enter the marks of subject2:");
    scanf("%d", &sub2);
    printf("Enter the marks of subject3:");
    scanf("%d", &sub3);

    total_percentage = ((double)(sub1 + sub2 + sub3) / 300) * 100; // double ((double)(sub1+sub2+sub3)/300)*100 is used for typecasting ((sub1+sub2+sub3))
    // to float so that the percentage done on float division
    if (total_percentage > 40 && sub1 > 30 && sub2 > 30 && sub3 > 30)
    {
        printf("you are passed with total percentage of %d%% and on each subject \n sub1 = %d \n sub2 = %d \n sub3 = %d", total_percentage, sub1, sub2, sub3);
    }
    else
    {
        if (total_percentage < 40)
        {
            printf("you are failed because you have %d%% in total",total_percentage);

        }
        else if(sub1 < 30 || sub2 < 30 || sub3 < 30)
        {
            printf("you are failed because your marks in the subject is less than 30 ");


        }
    }

    return 0;
}

