#include<stdio.h>

int main() {
int r;
float A;
printf("Enter the radius of the circle: ");
scanf("%d",&r);
A = 3.14159*( r*r);
printf("Area of the circle is : %.2f",A);
 return 0;
}