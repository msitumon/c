#include<stdio.h>
int main(){
    int normalInt=1000;
    short int small=-100;
    unsigned int count=25;
    long int big=1234567890;
    long long int veryBig=1234567890987654321;
    unsigned long long int huge=18446744073709551615U;

    double normalDouble=3.14;
    long double precise=3.1415926589793238L;

    printf("Normal int: %d\n",normalInt);
    printf("Small int: %hd\n",small);
    printf("Count int: %u\n",count);
    printf("Big int: %ld\n",big);
    printf("Very big int: %ld\n",big);
    printf("Huge int: %llu\n",huge);

    printf("Normal double: %lf\n",normalDouble);
    printf("Precise: %.18Lf\n",precise);
return 0;
}