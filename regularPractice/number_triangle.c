#include<stdio.h>
int main(){
    int c,r,row;
    printf("Enter the number of row: ");
    scanf("%d",&row);
    for(r=1; r<=row; r++){
        for(c=1; c<=r; c++){
            printf("%d",c);
        }
        printf("\n");
    }
return 0;
}