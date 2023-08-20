#include<stdio.h>

int main() {
int i,*p,**pp;
i = 12;
p= &i;
pp= &p;
printf("The value of i is %d using pointer to pointer",**pp);
 return 0;
}