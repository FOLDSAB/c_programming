#include<stdio.h>

int main() {

int i,*j;

i=30;
j=&i;

printf("Address of i %d \n",&i);
printf("Address of i %d \n",j);
printf("Address of j %d \n",&j);
printf("value of i %d \n",i);
printf("value of i %d \n",*(&i));
printf("value of i %d \n",*j);
return 0;
}