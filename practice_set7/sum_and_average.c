#include <stdio.h>
int sum(int *a, int *b);
float average(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int s = sum(&a, &b);
    float avg = average(&a, &b);
    printf("The sum the number %d and %d is: %d\n", a, b, s);
    printf("The average the number %d and %d is: %.2f", a, b, avg);

    return 0;
}
int sum(int *a, int *b)
{
    int s = *a + *b;
    return s;
}
float average(int *a, int *b)
{
    float c = (float)(*a + *b) / 2;
    return c;
}