#include<stdio.h>
#include <stdlib.h>

int main() {
int arr[10]={1,2,3,4,5,6,7,8,9,0};
int *ptr;
ptr= &arr[0];
printf("The ptr is pointing to the third element int the array which is 3 %d",*ptr+2);

 return 0;
}