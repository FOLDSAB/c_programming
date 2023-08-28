#include<stdio.h>
#include<string.h>
    struct employee
    {
        int code;
        int salary;
        char name[10];
    };

void show(struct employee *e1){
    printf("%d\n",e1->code);
    printf("%d\n",e1->salary);
    printf("%s\n",e1->name);
    e1->salary=999;

}
int main() {
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

    ptr->code=123;
    ptr->salary=456;
    strcpy(ptr->name,"utsab");
    show(ptr);
    printf("%d",ptr->salary);


    

 return 0;
}