#include<stdio.h>
int main(){
    int choice,r,a;
    float area;
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter Radius: ");
        scanf("%d",&r);
        area=3.14*r*r;
        printf("Area of Circle: %.2f",area);
        break;
        case 2:
        printf("Enter One Side: ");
        scanf("%d",&r);
        area=r*r;
        printf("Area of Square: %.2f",area);
        break;
        case 3:
        printf("Enter Length: ");
        scanf("%d",&r);
        printf("Enter Width: ");
        scanf("%d",&a);
        area=a*r;
        printf("Area of Circle: %.2f",area);
        break;
        default:
        printf("Invalid input.");
    }
}