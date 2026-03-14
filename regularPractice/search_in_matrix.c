#include<stdio.h>
int main(){
    int i,j,n,x;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    int a[n+5][n+5];

    printf("Enter elements: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter x: ");
    scanf("%d",&x);
    int flag=1;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j]==x){
                flag=0;
                break;
            }
        }
    }
    if(flag==0){
        printf("Will not take number.\n");
    }
    else{
        printf("Will take number.\n");
    }
return 0;
}