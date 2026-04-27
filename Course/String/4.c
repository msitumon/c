#include<stdio.h>
#include<string.h>
int main(){
    //Count the total number of words in a string.
    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    int i,count=0; 
    for(i=0; i<strlen(text); i++){
        if(text[i]=='\0' || text[i]==' ' || text[i]=='\n'){
            count++;
        }
    }
    printf("The total number of word is %d\n",count);
return 0;
}