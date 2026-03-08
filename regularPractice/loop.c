#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    

    /*initialization
    while(condition){
    code block to be executed;
    increment/decrement;
    }*/
   int i=0;
   printf("\nWhile loop part.\n");
   while(i<=x){
    printf("%d\n",i);
    i++;
   }


    /*initialization
    do{
    code block to be executed;
    increment/decrement;
    }
    while (condition);*/
    int j=1;
    printf("\n\nDo/While loop part.\n");
    do{
        printf("%d\n",j);
        j++;
    }
    while(j<x);


    /*for(intialization; condition; increment/decrement){
    code block to be executed;
    }*/
   printf("\n\nFor loop part.\n");
   for(int k=10; k>x; k--){
    printf("%d\n",k);
   }


   /*for(intialization; condition; increment/decrement){
    code block to be executed;
    for(intialization; condition; increment/decrement){
    code block to be executed;
    }
    }*/
   printf("\n\nNested for loop part.\n");
   for(int l=0; l<=x; l++){
    printf("%d\n",l);
    for(int m=4; m>=x; m--){
        printf("This is second statement: %d\n",m);
    }
   }
return 0;
}