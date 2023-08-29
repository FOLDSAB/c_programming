#include<stdio.h>

int main() {
FILE *ptr;
ptr=fopen("hello.txt","r");
if (ptr==NULL){
    printf("File don't exist");

}
else{
    printf("File exist");
}
 return 0;
}