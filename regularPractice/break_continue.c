#include<stdio.h>
int main(){
    int i,x;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    for(i=0; i<=x; i++){
        if(i==3 || i==5){
            continue;
        }
        if(i>7){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}