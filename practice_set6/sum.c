#include<stdio.h>
int sum(int a,int (b));
int main() {
int num1,num2;
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
sum(num1,num2);
 return 0;
}

int sum(int a , int b){
    int c = a + b;
    printf("The sum of %d and %d is %d",a,b,c);
}

