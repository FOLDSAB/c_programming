#include<stdio.h>
void array(int a[][3]);
int main() {
int arrayt[2][3]={{1,2,3},{1,2,3}};
array(arrayt);

 return 0;
}

void array (int a[][3]){
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
        printf("The array[%d][%d] is %d\n ",i,j,a[i][j]);
        }
    }
}