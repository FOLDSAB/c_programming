#include <stdio.h>

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if (num1%19==0){
        printf("The number is divisible by 19");
        
    }
    else{
        printf("The number is not divisible by 19");
    }
    
}