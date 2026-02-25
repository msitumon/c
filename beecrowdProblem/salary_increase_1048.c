#include<stdio.h>
int main(){
    float x,increase,earned;
    int percent;
    scanf("%f",&x);
    if(x<=400.00){
        percent=15;
    }
    else if(x<=800.00){
        percent=12;
    }
    else if(x<=1200.00){
        percent=10;
    }
    else if(x<=2000.00){
        percent=7;
    }
    else{
        percent=4;
    }
    increase=(x*percent)/100.0;
    earned=x+increase;
    printf("Novo salario: %.2f\n",earned);
    printf("Reajuste ganho: %.2f\n",increase);
    printf("Em percentual: %d %%\n",percent);
return 0;
}