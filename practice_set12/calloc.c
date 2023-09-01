#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
int *ptr;
printf("Enter the number which you want to allocate: ");
scanf("%d",&n);

ptr = (int *)calloc(n,sizeof(int));

for (int i = 0 ; i < n ; i++){
    printf("Enter a number %d: ",i);
    scanf("%d",&ptr[i]);
    // getchar();
}
 return 0;
}