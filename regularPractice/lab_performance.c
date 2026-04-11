#include<stdio.h>
int main(){
    int i,choice,max,count=0,a[5];
    printf("Enter marks of 5 students: \n");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
        printf("All students marks: \n");
        for(i=0; i<5; i++){
            printf("%d ",a[i]);
        }
        break;
        case 2: 
        max=a[0];
        for(i=0; i<5; i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        printf("Highest markis: %d\n",max);
        break;
        case 3:
        for(i=0; i<5; i++){
            if(a[i]>80){
                count++;
            }
        }
        printf("Number of students scoring>80: %d\n",count);
        break;
        case 4:
        printf("Exit\n");
        break;
        default:
        printf("Enter a valid input.\n");
    }
return 0;
}