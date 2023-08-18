#include<stdio.h>

int main() {
    int b;
    printf("Enter a number below 100 to set the continue statement there: ");
    scanf("%d",&b);
    for (int i = 0 ; i <=100 ; i ++){
        if (i==b){
            for (int j = 0 ; j<=100;j++){
                printf("_");
                // printf("\n");

            }
            
            continue;
            
        }

        else{
            printf("\n%d",i);
        }
    }
    printf("\n\nThe continue is done  at %d\n",b);
    for (int j = 0 ; j<=100;j++){
                printf("_");
            }
 return 0;
}
