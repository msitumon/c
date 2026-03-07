#include<stdio.h>
#include<stdbool.h>

int main(){
    int age,bool_input;
    bool isCitizen;

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Citizenship(1 for true and 0 for false): ");
    scanf("%d",&bool_input);
    isCitizen=bool_input;

    if(age>=18){
        printf("Old enough to vote.\n");
        if(isCitizen){
            printf("And you are a citizen, so you can vote!\n");
        }
        else{
            printf("But you must be a citizen to vote.\n");
        }
    }
    else{
        printf("Not old enough to vote.\n");
    }
return 0;
}