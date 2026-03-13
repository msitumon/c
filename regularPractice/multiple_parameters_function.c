#include<stdio.h>
void myFunction(char name[], int age){
    printf("Hello %s. You are %d years old.\n",name,age);
}
int main(){
    myFunction("Samiul", 20);
    myFunction("Rafi", 21);
    myFunction("Shakib", 18);
return 0;
}