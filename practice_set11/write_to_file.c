#include<stdio.h>

int main() {
FILE *ptr;
int num =3234;
ptr=fopen("test.txt","w");

fprintf(ptr,"%d",num);


 return 0;
}