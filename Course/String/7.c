#include<stdio.h>
#include<string.h>
int main(){
    //Find the frequency of characters.
    char str[100];
    int i,freq[256]={0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]!='\n'){
            freq[(int)str[i]]++;
        }
    }
    printf("\nCharacter frequencies: \n");
    for(i=0; i<256; i++){
        if(freq[i]!=0){
            printf("'%c' occurs %d times\n",i,freq[i]);
        }
    }
return 0;
}