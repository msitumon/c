#include<stdio.h>
int main(){
    int a=10,b=5,c=15,d,e,f,g,h;
    a=++b;
    c%=a;
    d=(a>c)|(a&c);
    b=(c>d)?1:0;
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
return 0;
}