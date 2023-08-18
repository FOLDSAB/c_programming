#include<stdio.h>

int main() {
int i,num,sum=0;
printf("\n\nEnter a number to print the sum of multiplication of a number till muliplied by 10: ");
scanf("%d",&num);
printf("\n\nThe multiplication table \n");
for (int j=1;j<=100;j++){
        int count = 1;
        printf("_");
        
        
    }
    printf("\n\n");

for (i=1;i<=10;i++){
  
    printf("%d x %d = %d\n",num,i,(i*num));
    sum=sum+(i*num);
}
  for (int j=1;j<=100;j++){
        int count = 1;
        printf("_");
        
        
    }
    printf("\n");
printf("\nThe sum of multiplication of %d is %d\n",num,sum);
for (int j=1;j<=100;j++){
        int count = 1;
        printf("_");
        
        
    }
    printf("\n");
 return 0;
}