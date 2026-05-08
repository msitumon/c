#include<stdio.h>
int main(){
    //Replace every null or negative number.
    int i,a[10];
    printf("Enter ten integer numbers: \n");
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    printf("The output: \n");
    for(i=0; i<10; i++){
        if(a[i]>0){
            printf("X[%d] = %d\n",i,a[i]);
        }
        else{
            printf("X[%d] = %d\n",i,1);
        }
    }
return 0;
}