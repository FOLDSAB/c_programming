#include<stdio.h>
int value_change(int *a);
int main() {
int a = 22;
printf("The value of a before changing is %d\n",a);
value_change(&a);

printf("The value of a after changing is %d",a);

 return 0;
}

int value_change(int *a){
    *a = *a*10;
    return *a;
}