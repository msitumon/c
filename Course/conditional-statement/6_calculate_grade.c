#include<stdio.h>
int main(){
    //Calculate percentage and grading.
    int phy,che,bio,mat,com;
    printf("Enter Physics, Chemistry, Biology, Mathematics and Comter marks: ");
    scanf("%d %d %d %d %d",&phy,&che,&bio,&mat,&com);
    int sum=phy+che+bio+mat+com;
    float average=sum/5.0;
    printf("Percentage is %.2f %%\n",average);
    if(average>=90){
        printf("Grade A\n");
    }
    else if(average>=80){
        printf("Grade B\n");
    }
    else if(average>=70){
        printf("Grade C\n");
    }
    else if(average>=60){
        printf("Grade D\n");
    }
    else if(average>=40){
        printf("Grade E\n");
    }
    else{
        printf("Grade F\n");
    }
return 0;
}