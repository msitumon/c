#include<stdio.h>
int main(){
    float c,f;
    printf("Enter fahrenheit temperature: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Celsius temperature = %.2f\n",c);
return 0;
}