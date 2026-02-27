#include<stdio.h>
int main(){
    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        printf("Excellent work!");
        break;
        case 'B':
        printf("Good job!");
        break;
        case 'C':
        printf("You passed, but there's room for improvement.");
        break;
        case 'D':
        printf("You need to work harder.");
        break;
        case 'a':
        printf("Excellent work!");
        break;
        case 'b':
        printf("Good job!");
        break;
        case 'c':
        printf("You passed, but there's room for improvement.");
        break;
        case 'd':
        printf("You need to work harder.");
        break;
    }
return 0;
}