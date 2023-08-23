#include<stdio.h>

int main() {
int student[5];
for(int i=0;i<=4;i++){
    printf("Enter the marks of a student %d: ",i+1);
    scanf("%d",&student[i]);
    
}
for(int i=0;i<=4;i++){
    // printf("%d",i);
    printf("The marks of student %d is %d\n",i+1,student[i]);
   
}
}