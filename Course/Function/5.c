#include<stdio.h>
#include<string.h>
int Palindrome(char text[]){
    int i,flag=0,length=strlen(text)-2;
    for(i=0; i<length/2; i++){
        if(text[i]!=text[length/2-i]){
            flag=1;
        }
    }
    return flag;
}
int main(){
    //To check if a string is a palindrome.
    char word[100];
    fgets(word, sizeof(word), stdin);
    if(Palindrome(word)){
        printf("Here %s is a palindrome.\n",word);
    }
    else{
        printf("Here %s is not a palindrome.\n",word);
    }
return 0;
}