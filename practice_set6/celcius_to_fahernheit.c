#include<stdio.h>
double fahernheit(float a);
int main() {
float celcius;
printf("Enter a celcius value to convert into fahernheit: ");
scanf("%f",&celcius);
double conversion = fahernheit(celcius);
printf("The %.2f celcius is converted to %.2lf fahernheit",celcius,conversion); 
 return 0;
}
double fahernheit(float a){
    double b=(a*9/5)+32 ;
    return b;
}