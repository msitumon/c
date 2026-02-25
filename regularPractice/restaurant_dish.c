#include<stdio.h>
int main(){
    int time;
    printf("Enter the time: ");
    scanf("%d",&time);
    switch(time){
        case 6 ... 11:
        printf("Pancakes and Coffee");
        break;
        case 12 ... 15:
        printf("Chicken Salad");
        break;
        case 16 ... 18:
        printf("Samosa and Chai");
        case 19 ... 22:
        printf("Grilled Steak");
        break;
    }
return 0;
}