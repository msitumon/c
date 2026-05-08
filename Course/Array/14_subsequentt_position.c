#include<stdio.h>
int main(){
    //Put thte double of the previous position.
    int i,n;
    printf("Enter starting position: ");
    scanf("%d",&n);
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n",i,n);
        n*=2;
    }
return 0;
}