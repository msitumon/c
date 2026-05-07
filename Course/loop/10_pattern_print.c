#include<stdio.h>
int main(){
    //Pattern print.
    int i,n;
    printf("Enter row number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}