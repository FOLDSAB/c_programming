#include<stdio.h>

int main() {


char str[] ={'u','t','s','a','v','\0'};
char *ptr=&str[0];

for ( int i=0;i<5;i++){
    printf("%c",*(ptr+i));
}
 return 0;
}