#include<stdio.h>
int main(){
    int items;
    float cost_per_item;
    double total_cost;
    char currency='$';

    //Take the user input
    printf("Enter items number: ");
    scanf("%i",&items);
    printf("Enter cost per item: ");
    scanf("%F",&cost_per_item);
    total_cost=items*cost_per_item;

    //print the final result
    printf("Number of items: %d\n",items);
    printf("Cost per item: %.2f %c\n",cost_per_item,currency);
    printf("Total cost = %.2lf %c\n",total_cost,currency);
return 0;
}