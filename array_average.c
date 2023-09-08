#include<stdio.h>
#include<string.h>

int main() {

int arr[]={1,2,3,4,5,6,7,8,9};
int *ptr=&arr[0];
int sum=0;

for (int i = 0 ; i<=8; i++)
{
    
     sum =sum+ *ptr+i;
}

printf("The sum of the numbers in array is %d",sum);
 return 0;
}