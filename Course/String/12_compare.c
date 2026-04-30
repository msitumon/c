#include<stdio.h>
int main(){
    //Compare two string without using library function.
    char str1[100],str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2),stdin);
    int flag=0;
    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i]!=str2[i]){
            flag+=1;
        }
    }
    if(flag==0){
        printf("String two are equal.\n");
    }
    else{
        printf("String two are not equal.\n");
    }
return 0;
}