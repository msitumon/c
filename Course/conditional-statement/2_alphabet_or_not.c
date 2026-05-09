#include<stdio.h>
int main(){
    //Check a character is alphaber or not.
    char x;
    printf("Enter a character: ");
    scanf(" %c",&x);
    if(x>='a' && x<='z' || x>='A' && x<='Z'){
        printf("%c is an alphabet.\n",x);
    }
    else{
        printf("%c is not an alphabet.\n",x);
    }
return 0;
}