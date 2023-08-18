#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter a number to print multiplication table in reverse: ");
    scanf("%d",&num);
    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }
    return 0;
}
