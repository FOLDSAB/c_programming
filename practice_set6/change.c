#include<stdio.h>
int change(int a);
int main() {
    int b = 33;
change(b);
printf("b is %d",b);
 return 0;
}

int change(int a){
    a = 77;
}

