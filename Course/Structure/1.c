#include<stdio.h>
struct student{
    char name[100];
    int id;
    int phy;
    int math;
    int che;
};
int main(){
    //Student information.
    struct student s;
    printf("Enter the student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter Id: ");
    scanf("%d",&s.id);
    printf("Enter the mark of Physics, Mathematics and Chemistry: ");
    scanf("%d %d %d",&s.phy,&s.math,&s.che);
    int total,average;
    char grade;
    total=s.phy+s.math+s.che;
    average=total/3;
    if(average>=80){
        grade='A';
    }
    else if(average>=70){
        grade='B';
    }
    else if(average>=60){
        grade='C';
    }
    else if(average>=50){
        grade='D';
    }
    else{
        grade='F';
    }
    printf("\n\nStudent's name: %sID: %d\nTotal matks: %d\naverage: %d\ngrade: %c\n",s.name,s.id,total,average,grade);
return 0;

}