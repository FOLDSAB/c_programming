#include <stdio.h>
int addr(int a);
int main()
{
    int a = 33;
    printf("%u", &a);
    addr(a);
    printf("\nThe address are not same");

    return 0;
}

int addr(int a)
{
    printf("\n%u", &a);
}