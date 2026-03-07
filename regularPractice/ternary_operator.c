#include<stdio.h>

int main(){
    int myAge;
    const int votingAge=18;

    printf("Enter your age: ");
    scanf("%d",&myAge);
    
    //Variable = (condition) ? expressionTrue : expressionFalse;
    (myAge>=votingAge) ? printf("\nOld enough to vote.\n") : printf("\nNot old enough to vote.\n");

return 0;
}