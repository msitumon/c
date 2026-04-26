#include<stdio.h>
int main(){
    //Sum up the row-wish element of a 2D array.
    int i,j,c,r,sum=0;
    printf("Enter row and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter element: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum+=a[i][j];
        }
        printf("The sum of row %d: %d\n",i+1,sum);
        sum=0;
    }
return 0;
}