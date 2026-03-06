#include<stdio.h>
int main(){
    //maximum possible score in the game
    int maxScore=500,optainScore;

    //Input user optain score
    printf("Enter your optain score out of 500: ");
    scanf("%i",&optainScore);

    /*Calculate the percentage of the user's score in relation to the maximum available score.
    Convert user optainScore to float to make sure that the division is accurate*/
    float percentage=(float)optainScore*100.0/maxScore;

    //Print the percentage
    printf("User's percentage is %.2f\n",percentage);
return 0;
}