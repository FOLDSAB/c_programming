#include<stdio.h>

int main() {
    int i = 1;
    int input;
    printf("Enter a number to print the natural number from 1 to your input: ");
    scanf("%d",&input);

   do {
    printf("%d\n",i);
    i++;
   }
   while (i <= input);
  
   
 return 0;
}