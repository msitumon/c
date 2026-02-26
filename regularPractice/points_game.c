#include<stdio.h>
int main(){
    int i,code,point=60;
    for(i=1; i<=3; i++){
        printf("Encounter %d: ",i);
        scanf("%d",&code);
        switch(code){
            case 1:
            point=point-15;
            break;
            case 2:
            point=point-30;
            break;
            case 3:
            point=point+20;
            break;
        }
        if(point<=0){
            printf("Survivor died!\nHealth reached %d.\n",point);
            break;
        }
        else if(i==3){
            printf("Final Health: %d\nStatus: Survivor survived!",point);
        }
    }
return 0;
}