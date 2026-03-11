#include<stdio.h>
int main(){
    char name[30],homeTown[20];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your home town: ");
    fgets(homeTown, sizeof(homeTown), stdin);

    printf("Hello %s! You are from %s.\n",name,homeTown);
    return 0;
}