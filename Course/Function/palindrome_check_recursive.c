#include<stdio.h>
#include<string.h>
int Palindrome(char word[], int start, int end){
    if(start>=end){
        return 1;
    }
    if(word[start] != word[end]){
        return 0;
    }
    return Palindrome(word, start+1, end-1);
}
int main(){
    //Palindrome check using recursive method.
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);
    if(Palindrome(word, 0, strlen(word)-1)){
        printf("This word is palindrome.\n");
    }
    else{
        printf("This word isn't palindrome.\n");
    }
    return 0;
}