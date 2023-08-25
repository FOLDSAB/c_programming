#include<stdio.h>

int main() {


char str[] ={'u','t','s','a','v','\0'};
char *ptr=&str[0];

char strs[]="utsab";
for ( int i=0;i<5;i++){
    printf("%c",*(ptr+i));
  
}
printf("\n%s",strs);
 return 0;
}