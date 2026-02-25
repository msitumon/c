#include<stdio.h>
int main(){
    int result,i,initial=1000;
    for(i=1; i<=5; i++){
       printf("Enter the result of round %d: ",i);
       scanf("%d",&result);
       if(result==1){
        initial+=500;
       } 
       else{
        initial-=500;
        if(initial<=0){
           break;
        }
       }
    }
    if(initial>0){
        printf("Final BAlance: %d\nStatus: Survived!\n",initial);
    }
    else{
        printf("Player Eliminated!\nBalance reached 0."); 
    }
return 0;
}