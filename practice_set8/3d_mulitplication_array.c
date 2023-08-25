#include <stdio.h>
#include <stdlib.h>

int multiplication(int *a);
int main()
{
    int arr[3][10];
    int *ptr;
    ptr = &arr[0][0];
    multiplication(ptr);
    printf("%d",arr[1][9]);
    return 0;
}
int multiplication(int *a)
{
    int counti10 = 0, counti20 = 0;
    int two = 2, seven = 7, nine = 9;
    for (int i = 0; i < 30; i++)
    {

        if (i < 10)
        {

            printf("array = %d -------- %d x %d = %d\n", i, two, i + 1, *(a + i) = (i+ 1) * two);
            
        }
        else if(i > 10 && i <= 20)
        {

            printf("array = %d -------- %d x %d = %d\n", i, seven, i + 1, *(a + i) = (i+ 1) * seven);
            
        }
        else if (i > 20 && i <= 30)
            
        {
            printf("array = %d -------- %d x %d = %d\n", i, nine, i + 1, *(a + i) = (i+ 1) * nine);
        }
        
    }
    return *a;
}


