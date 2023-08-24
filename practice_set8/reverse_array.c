#include <stdio.h>

int arrayer(int *ptr);

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = &array[0];
    arrayer(ptr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
    }
//seeing if the array is reversed permanently or not
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
int arrayer(int *ptr)
{
    int reverse_array[10];

    for (int i = 9; i >= 0; i--)
    {
        reverse_array[9 - i] = *(ptr + i);
    }
    for (int i = 0; i < 10; i++)
    {
        *(ptr + i) = reverse_array[i];
    }

    return *reverse_array;
}
