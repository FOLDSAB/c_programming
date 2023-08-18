#include<stdio.h>

int main() {
    int b;
    printf("Enter a number below 1000 to set the break statement there: ");
    scanf("%d",&b);
    for (int i = 0 ; i <=1000 ; i ++){
        if (i==b){
            for (int j = 0 ; j<=100;j++){
                printf("_");
            }
            printf("\n\nThe break is done here at %d\n",i);
            break;
            
        }

        else{
            printf("%d\n",i);
        }
    }
    for (int j = 0 ; j<=100;j++){
                printf("_");
            }
 return 0;
}
