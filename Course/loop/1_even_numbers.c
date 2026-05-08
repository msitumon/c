#include<stdio.h>
int main(){
    //Even numbers between 1 and 100.
    int i,n;
    printf("Ever numbers between 1 and 100: ");
    for(i=1; i<=100; i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
return 0;
}