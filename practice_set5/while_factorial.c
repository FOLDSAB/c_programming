#include <stdio.h>

int main()
{
    int num;
    long long fact=1;
    printf("Enter a number to find it's factorial: ");
    scanf("%d", &num);
    int num1=num;

    if (num == 0 || num == 1)
    {
        printf("The factorial is 1");
    }
    else
    {
        while (num != 1)
        {

            fact = fact * num;
            num--;
        }
        printf("The factorial of number %d is %lld", num1,fact);
    }
    return 0;
}