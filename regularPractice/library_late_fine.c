#include<stdio.h>
int main(){
    int book_number,i,day,fine,sum=0;
    printf("Enter number of books: ");
    scanf("%d",&book_number);
    for(i=1; i<=book_number; i++){
        printf("Enter late days for book %d: ",i);
        scanf("%d",&day);
        sum=sum+day;
    }
    fine=sum*5;
    printf("Total library fine: %d BDT\n",fine);
return 0;
}