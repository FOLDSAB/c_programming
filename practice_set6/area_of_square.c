#include<stdio.h>
#include <math.h>
int area(int a);
int main() {
    int side;
    printf("Enter the length of a side of square: ");
    scanf("%d",&side);
area(side);
 return 0;
}

int area (int a){
   int b = pow(a,2);
   printf("The area of the square is %d",b);

}