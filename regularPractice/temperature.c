#include<stdio.h>
int main(){
    float c,f,k,t;
    int code;
    printf("Celsius to Fahrenheit = 1(code)\n");
    printf("Fahrenheit to Celsius = 2\n");
    printf("Celsius to Kalvin = 3\n");
    printf("Kalvin to Celsius = 4\n");
    printf("Fahrenheit to Kalvin = 5\n");
    printf("Kalvin to Fahrenheit = 6\n");
    printf("Enter the code: ");
    scanf("%d",&code);
    switch(code){
        case 1:
        printf("Enter celsius temperature: ");
        scanf("%f",&c);
        f=c*9/5+32;
        printf("Fahrenheit temperature = %.2f\n",f);
        break;
        case 2:
        printf("Enter fahrenheit temperature: ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("Celsius temperature = %.2f\n",c);
        break;
        case 3:
        printf("Enter celsius temperature: ");
        scanf("%f",&c);
        k=c+273.15;
        printf("Kalvin temperature = %.2f\n",k);
        break;
        case 4:
        printf("Enter kalvin temperature: ");
        scanf("%f",&k);
        c=k-273.15;
        printf("Celsius temperature = %.2f\n",c);
        break;
        case 5:
        printf("Enter fahrenheit temperature: ");
        scanf("%f",&f);
        k=c+273.15;
        printf("Kalvin temperature = %.2f\n",k);
        break;
        case 6:
        printf("Enter kalvin temperature: ");
        scanf("%f",&k);
        c=k-273.15;
        printf("Fahrenheit temperature = %.2f\n",f);
        break;
    }
return 0;
}