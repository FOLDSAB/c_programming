#include<stdio.h>

int main() {
   int n,n2,sum =0 ;
   printf("Enter a number : ");
    scanf("%d",&n);
    n2=n;
    while (n != 0){
        sum = sum + n;
        n--;
        
    }
    printf("\nThe sum of the natural number form 1 to %d is %d ",n2,sum);
    return 0;
}