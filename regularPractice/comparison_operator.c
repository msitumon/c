#include<stdio.h>
int main(){
    /*List of comparison operator or relational operator:
    ==  Equal to
    !=  Not equal
    >   Greater than
    <   Less than
    >=  Greater than or equal to
    <=  Less than or equal to*/
    
    //Variable declaration
    int myAge,votingAge=18;

    //User's input
    printf("Enter your age: ");
    scanf("%d",&myAge);

    printf("\nMy Age >= Voting Age: %d\n",myAge>=votingAge);
    if(myAge>=votingAge){
        printf("Old enough to vote.\n");
    }
    else{
        printf("Not old enough to vote.\n");
    }
return 0;
}