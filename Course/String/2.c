#include<stdio.h>
#include<string.h>
int main(){
    //Separate the individual characters from a string.
    char name[200];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Separate the individual characters: ");
    for(int i=0; i<strlen(name); i++){
        printf("%c ",name[i]);
    }
return 0;
}