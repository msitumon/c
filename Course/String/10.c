#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    //Convert string into lowercase or Uppercase character.
    char sentence[100];
    printf("Enter your text: ");
    fgets(sentence, sizeof(sentence), stdin);
    for(int i=0; sentence[i]!='\0'; i++){
        sentence[i]=toupper(sentence[i]);
    }
    printf("Uppercase: %s",sentence);
    for(int i=0; sentence[i]!='\0'; i++){
        sentence[i]=tolower(sentence[i]);
    }
    printf("Lowercase: %s",sentence);
return 0;
}