#include<stdio.h>
float average(int a,int b,int c);
int main() {
    int num1,num2,num3;
    printf("Enter 3 numbers respecitively to find the average of 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
float d = average(num1,num2,num3);
printf("%.2f",d);
 return 0;
}

float average(int a, int b ,int c){
    float average = (float)(a+b+c)/3.0;
    return average;
}