#include<stdio.h>
#include<string.h>
int main(){
    //Count alphabets, digits and special characters numbers.
    char pass[100];
    printf("Enter a password: ");
    fgets(pass, sizeof(pass), stdin);
    int a=0,d=0,s=0;
    for(int i=0; i<strlen(pass); i++){
        if(pass[i]>='a' && pass[i]<='z' || pass[i]>='A' && pass[i]<='Z'){
            a++;
        }
        else if(pass[i]>='0' && pass[i]<='9'){
            d++;
        }
        else{
            s++;
        }
    }
    printf("Total number of \nalphabet: %d\ndigit: %d & \nspecial character: %d\n",a,d,s);
return 0;
}