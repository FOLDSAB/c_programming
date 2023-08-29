#include<stdio.h>

int main() {

int num;
char string[123];
FILE *ptr;
ptr=fopen("test.txt","rb");
fscanf(ptr,"%d",&num);
printf("%d",num);
fclose(ptr);

 return 0;
}