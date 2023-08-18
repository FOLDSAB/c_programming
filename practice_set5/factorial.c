#include<stdio.h>

int main() {
int num,sum=1;
printf("Enter a number to find it's factorial: ");
scanf("%d",&num);
for (int i=1;i<=num;i++){
    sum *=i; 
}
printf("The factorial of number %d is %d",num,sum);
 return 0;
}