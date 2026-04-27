#include<stdio.h>
int main(){
    //Arithmatic operation on 2D matrix.
    int i,j,c1,c2,r1,r2;
    printf("Enter first array's row and column: ");
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    printf("Enter array element:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second array row and column: ");
    scanf("%d %d",&r2,&c2);
    int b[r2][c2];
    printf("Enter element: \n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
        int sum[r1][c1],sub[r1][c1];
        printf("Addition:\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                sum[i][j]=a[i][j]+b[i][j];
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
        printf("Substration:\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                sub[i][j]=a[i][j]-b[i][j];
                printf("%d ",sub[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Addition or substration not posible.\n");
    }
    if(c1==r2){
        printf("Multiplication: \n");
        int product[r1][c2];
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                product[i][j]=0;
                for(int k=0; k<c1; k++){
                    product[i][j]=a[i][k]*b[k][j];
                }
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Multiplication is not possible.\n ");
    }
return 0;
}