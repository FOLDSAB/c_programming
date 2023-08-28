#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    int salary;
    char name[10];
}emp;

void show(emp *e1){
printf("%d\n",e1->code);
printf("%d\n",e1->salary);
printf("%s\n",e1->name);
}
int main() {
    emp e1;
    emp *ptr;
    ptr=&e1;

    ptr->code=123;
    ptr->salary=444;
    strcpy(ptr->name,"utsab");
    show(ptr);

 return 0;
}
