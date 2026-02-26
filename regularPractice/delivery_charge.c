#include<stdio.h>
int main(){
    int weight,distance,charge;
    printf("Enter product weight: ");
    scanf("%d",&weight);
    printf("Enter product distance: ");
    scanf("%d",&distance);
    if(weight>5 && distance>=5){
        charge=(distance-4)*20+10;
    }
    else if(weight>5){
        charge=10;
    }
    else if(distance>=5){
        charge=(distance-4)*20;
    }
    else{
        charge=0;
    }
    printf("Total Delivery Charge = %d\n",charge);
return 0;
}