#include<stdio.h>
int main(){
    //The value of snack to pay
    int x,y;
    float price;
    printf("1 Cachorro Quente, R$ 4.00\n");
    printf("2 X-Salada, R$ 4.50\n");
    printf("3 X-Bacon, R$ 5.00\n");
    printf("4 Torrada simples, R$ 2.00\n");
    printf("5 Refrigerante, R$ 1.50\n\n");
    printf("Enter product code and quantity: ");
    scanf("%d %d",&x,&y);
    if (x==1){
        price=4*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==2){
        price=4.50*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==3){
        price=5.00*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==4){
        price=2.00*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==5){
        price=1.50*y;
        printf("Total: R$ %.2f\n",price);
    }
}