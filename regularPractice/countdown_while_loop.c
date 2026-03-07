#include<stdio.h>
int main(){
    int countdown;

    printf("Enter remains day: ");
    scanf("%d",&countdown);

    while(countdown>0){
        printf("%d\n",countdown);
        countdown--;
    }
    printf("Happy New Year!!\n");
return 0;
}