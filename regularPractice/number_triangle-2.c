#include<stdio.h>
int main(){
    int c,r,row;
    printf("Enter the row number: ");
    scanf("%d",&row);
    for(r=1; r<=row; r++){
        for(c=1; c<=r; c++){
            printf("%d",r);
        }
        printf("\n");
    }
return 0;
}