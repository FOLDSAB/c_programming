#include <stdio.h>

int main()
{
    int num, indicator = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 1 || num == 0)
    {
        printf("%d is not consider as a Prime number even if it is not divisible by any numbers", num);
    }
    if (num == 2)
    {
        printf("The number %d is a Prime number", num);
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                indicator = 1;
                break;
            }
        }

        if (indicator == 1)
        {
            printf("The number %d is Not Prime number because it is divisible by %d", num, i);
        }
        else
        {
            printf("The number %d is a Prime number", num);
        }
    }
    return 0;
}