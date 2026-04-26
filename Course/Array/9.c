#include<stdio.h>
int main(){
    //Print 2D array.
    int i,j,c,r;
    printf("Enter row and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter array element: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}