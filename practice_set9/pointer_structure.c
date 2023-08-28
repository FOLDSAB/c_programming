#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    int salary;
    char name[10];

};

int main() {
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=123;
    printf("%d",ptr->code);

 return 0;
}