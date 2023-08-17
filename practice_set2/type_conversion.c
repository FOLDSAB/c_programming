#include<stdio.h>

int main() {
    int a,c;
    float b,d;
    a = 19;
    b = 12.123;

     a = b;
    printf(" After converting b = (%.2f) to int it is converted to  %d\n",b,a);

    b = a ;
    printf("After converting a = (%d) to float is is converted to %.2f",a,b);


 return 0;
}