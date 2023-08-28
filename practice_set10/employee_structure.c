#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    int salary;
    char name[3];
};
int main() {
    struct employee e1;
    struct employee e2;
    struct employee e3;

    e1.code=1;
    e1.salary=22;
    strcpy(e1.name,"e1");
    e2.code=2;
    e2.salary=33;
    strcpy(e2.name,"e2");
    e1.code=3;
    e1.salary=43;
    strcpy(e3.name,"e3");
    


 return 0;
}