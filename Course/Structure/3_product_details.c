#include<stdio.h>
struct Product{
    int n;
    int id;
    char name[100];
    float price;
    int quantity;
};
int main(){
    //Product details and inventory.
    int i,n,cnt;
    double total=0;
    printf("Enter total product number: ");
    scanf("%d",&n);
    struct Product a[n],value[n];
    for(i=0; i<n; i++){
        printf("Enter product ID: ");
        scanf("%d",&a[i].id);
        printf("Enter product name: ");
        scanf("%s",a[i].name);
        printf("Enter product quantity and price: ");
        scanf("%d %f",&a[i].quantity,&a[i].price);
        value[i].price=a[i].quantity*a[i].price;
        total+=value[i].price;
        printf("\n");
    }
    double max=0;
    for(i=0; i<n; i++){
        printf("Total price of %s is %.2f\n",a[i].name,value[i].price);
        if(max<=value[i].price){
            max=value[i].price;
            cnt=i;
        }
    }
    printf("%s is the highest total value: %.2lf\n",a[cnt].name,max);
    printf("Total inventory value: %.2lf\n",total);
return 0;
}