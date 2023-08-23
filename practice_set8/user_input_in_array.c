#include <stdio.h>

int main()
{
    int arr[10], num = 5;
    for (int i = 0; i < 10; i++)
    {
       printf("Enter the input no%d: ",i+1);
       scanf("%d",&arr[i]);
    }
    printf("The input is saved to array");
    for (int j = 0; j < 10; j++)
    {
        printf("\nThe value of arr[%d] is %d",j, arr[j]);
    }
    return 0;
}