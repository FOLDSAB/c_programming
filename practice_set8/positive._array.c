#include <stdio.h>
void positive(int *a);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    p = &arr[0];
    positive(p);
    return 0;
}

void positive(int *a)
{
    int count=0;
    for (int i = 0; i < 10; i++)
    {
        if (*(a+i)%2==0){
            
            count=count+1;
        }

    }
    printf("There are %d positive numbers in the array",count);
}
